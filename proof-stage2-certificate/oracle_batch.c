/*
 * oracle_batch.c -- batch form of conformance-tidy-oracle/tidy_oracle.c.
 *
 * This reproduces the EXACT wrapper, options, call path and extraction of the
 * local tidy 5.8.0 oracle driver (see ../conformance-tidy-oracle/tidy_oracle.c
 * and its README), differing only in that it reads one fragment per input
 * line instead of one fragment per process, for certificate-scale runs.
 *
 *   - XHTML 1.0 Strict wrapper with two <!--wrapdelimiter--> markers
 *   - tidySetCharEncoding(doc, "UTF8"); indent=0; output-xhtml=yes; wrap=0;
 *     preserve-entities=yes
 *   - tidyParseBuffer, then tidySaveBuffer twice, NO tidyCleanAndRepair
 *   - extraction: PHP explode(DELIM, saved)[1], then remove every literal
 *     <body> and </body>
 *
 * Usage: oracle_batch CORPUS.txt RESULTS.bin
 * Each corpus line is one fragment. RESULTS.bin is a concatenation of records
 * [uint32 little-endian byte length][that many output bytes], in corpus order.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "tidy.h"
#include "tidybuffio.h"

static const char *HEAD =
    "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" "
    "\"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">"
    "<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\" lang=\"en\">"
    "  <head>    <title>Just A Wrapper</title>"
    "<meta http-equiv=\"content-type\" content=\"text/html;charset=UTF-8\"/>"
    "  </head> <!--wrapdelimiter--><body>";
static const char *TAIL = " </body><!--wrapdelimiter--></html>";
static const char *DELIM = "<!--wrapdelimiter-->";

static void die(const char *msg)
{
    fprintf(stderr, "oracle_batch: %s\n", msg);
    exit(1);
}

/* PHP str_replace: remove every literal occurrence of needle. */
static char *remove_all(const char *s, size_t len, const char *needle, size_t *out_len)
{
    size_t nlen = strlen(needle);
    char *out = (char *)malloc(len + 1);
    if (!out) die("out of memory");
    size_t j = 0;
    for (size_t i = 0; i < len;) {
        if (nlen && i + nlen <= len && memcmp(s + i, needle, nlen) == 0) i += nlen;
        else out[j++] = s[i++];
    }
    out[j] = '\0';
    *out_len = j;
    return out;
}

/* PHP explode(DELIM, saved)[1]: bytes strictly between the first two markers. */
static char *between_delimiters(const char *s, size_t len, size_t *out_len)
{
    size_t dlen = strlen(DELIM);
    size_t first = len + 1, second = len + 1;
    for (size_t i = 0; i + dlen <= len; ++i) {
        if (memcmp(s + i, DELIM, dlen) == 0) {
            if (first == len + 1) first = i;
            else { second = i; break; }
            i += dlen - 1;
        }
    }
    if (first == len + 1 || second == len + 1)
        die("saved document does not contain two wrapdelimiter markers");
    *out_len = second - (first + dlen);
    char *out = (char *)malloc(*out_len + 1);
    if (!out) die("out of memory");
    memcpy(out, s + first + dlen, *out_len);
    out[*out_len] = '\0';
    return out;
}

static void run_one(const char *src, size_t srclen, FILE *out)
{
    size_t headlen = strlen(HEAD), taillen = strlen(TAIL);
    size_t wrapped_len = headlen + srclen + taillen;
    char *wrapped = (char *)malloc(wrapped_len + 1);
    if (!wrapped) die("out of memory");
    memcpy(wrapped, HEAD, headlen);
    memcpy(wrapped + headlen, src, srclen);
    memcpy(wrapped + headlen + srclen, TAIL, taillen);
    wrapped[wrapped_len] = '\0';

    TidyDoc doc = tidyCreate();
    if (!doc) die("tidyCreate failed");
    tidySetCharEncoding(doc, "UTF8");
    tidyOptSetInt(doc, tidyOptGetIdForName("indent"), 0);
    tidyOptSetBool(doc, tidyOptGetIdForName("output-xhtml"), yes);
    tidyOptSetInt(doc, tidyOptGetIdForName("wrap"), 0);
    tidyOptSetBool(doc, tidyOptGetIdForName("preserve-entities"), yes);

    TidyBuffer inbuf;
    tidyBufInit(&inbuf);
    tidyBufAppend(&inbuf, wrapped, (uint)wrapped_len);
    tidyParseBuffer(doc, &inbuf);

    TidyBuffer save1, save2;
    tidyBufInit(&save1);
    tidyBufInit(&save2);
    tidySaveBuffer(doc, &save1);
    tidySaveBuffer(doc, &save2);

    size_t midlen = 0;
    char *mid = between_delimiters((char *)save2.bp, save2.size, &midlen);
    size_t bodylen = 0;
    char *body = remove_all(mid, midlen, "<body>", &bodylen);
    char *body2 = remove_all(body, bodylen, "</body>", &bodylen);

    uint32_t n = (uint32_t)bodylen;
    if (fwrite(&n, sizeof(n), 1, out) != 1) die("short length write");
    if (bodylen && fwrite(body2, 1, bodylen, out) != bodylen) die("short body write");

    tidyBufFree(&inbuf);
    tidyBufFree(&save1);
    tidyBufFree(&save2);
    tidyRelease(doc);
    free(wrapped);
    free(mid);
    free(body);
    free(body2);
}

int main(int argc, char **argv)
{
    if (argc != 3) die("usage: oracle_batch CORPUS.txt RESULTS.bin");
    FILE *in = fopen(argv[1], "rb");
    if (!in) die("cannot open corpus");
    FILE *out = fopen(argv[2], "wb");
    if (!out) die("cannot open results");
    char *line = NULL;
    size_t cap = 0;
    ssize_t got;
    unsigned long count = 0;
    while ((got = getline(&line, &cap, in)) != -1) {
        while (got > 0 && (line[got - 1] == '\n' || line[got - 1] == '\r')) --got;
        run_one(line, (size_t)got, out);
        ++count;
        if (count % 100000 == 0) fprintf(stderr, "oracle_batch: %lu cases\n", count);
    }
    free(line);
    fclose(in);
    if (fclose(out) != 0) die("close failed");
    fprintf(stderr, "oracle_batch: %lu cases total\n", count);
    return 0;
}
