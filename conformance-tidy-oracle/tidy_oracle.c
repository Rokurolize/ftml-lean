/*
 * tidy_oracle.c -- drive libtidy 5.8.0 the way live Wikidot's
 * WikiTransformation::purifyHtml drives it through PHP's ext/tidy binding.
 *
 * Exact binding reproduced (see TIDY-FINGERPRINT.md and GAP-LEDGER.md's
 * LIBTIDY VERSION GAP CLOSED entry):
 *   - XHTML 1.0 Strict wrapper with the two <!--wrapdelimiter--> markers
 *   - indent=false, output-xhtml=true, wrap=0, encoding UTF8
 *   - tidyParseBuffer, then tidySaveBuffer twice (call #1 mirrors
 *     ext/tidy's tidy_doc_update_properties, call #2 mirrors the
 *     cast-to-string in explode()); NO tidyCleanAndRepair
 *   - preserve-entities=yes, the configuration difference that makes
 *     5.8.0 keep &#32;, &#160;, &#8212;, &quot; the way live does
 *   - extraction: explode on the marker, take arr[1], delete every
 *     literal <body> and </body> (str_replace, not just the outer pair)
 *
 * Usage: tidy_oracle INPUT [OUTPUT] [options]
 *   --no-preserve-entities   stock 5.8.0 default (for config-gap probes)
 *   --save1 PATH             also write tidySaveBuffer call #1 output
 *   --raw PATH               also write the whole wrapped saved document
 *   --version                print the linked libtidy version and exit
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    fprintf(stderr, "tidy_oracle: %s\n", msg);
    exit(1);
}

static char *read_file(const char *path, size_t *len_out)
{
    FILE *f = fopen(path, "rb");
    if (!f) { perror(path); exit(1); }
    if (fseek(f, 0, SEEK_END) != 0) die("seek failed");
    long n = ftell(f);
    if (n < 0) die("tell failed");
    rewind(f);
    char *buf = (char *)malloc((size_t)n + 1);
    if (!buf) die("out of memory");
    size_t got = fread(buf, 1, (size_t)n, f);
    if (got != (size_t)n) die("short read");
    fclose(f);
    buf[got] = '\0';
    *len_out = got;
    return buf;
}

static void write_file(const char *path, const char *buf, size_t len)
{
    FILE *f = fopen(path, "wb");
    if (!f) { perror(path); exit(1); }
    if (len && fwrite(buf, 1, len, f) != len) die("short write");
    fclose(f);
}

/* PHP str_replace: remove every literal occurrence of needle. */
static char *remove_all(const char *s, size_t len, const char *needle, size_t *out_len)
{
    size_t nlen = strlen(needle);
    char *out = (char *)malloc(len + 1);
    if (!out) die("out of memory");
    size_t j = 0;
    for (size_t i = 0; i < len;) {
        if (nlen && i + nlen <= len && memcmp(s + i, needle, nlen) == 0) {
            i += nlen;
        } else {
            out[j++] = s[i++];
        }
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

int main(int argc, char **argv)
{
    const char *in_path = NULL, *out_path = NULL;
    const char *save1_path = NULL, *raw_path = NULL;
    int preserve_entities = 1;

    for (int i = 1; i < argc; ++i) {
        const char *a = argv[i];
        if (strcmp(a, "--no-preserve-entities") == 0) preserve_entities = 0;
        else if (strcmp(a, "--save1") == 0 && i + 1 < argc) save1_path = argv[++i];
        else if (strcmp(a, "--raw") == 0 && i + 1 < argc) raw_path = argv[++i];
        else if (strcmp(a, "--version") == 0) {
            printf("%s\n", tidyLibraryVersion());
            return 0;
        } else if (a[0] == '-') die("unknown option");
        else if (!in_path) in_path = a;
        else if (!out_path) out_path = a;
        else die("too many positional arguments");
    }
    if (!in_path) die("usage: tidy_oracle INPUT [OUTPUT] [options]");

    size_t srclen = 0;
    char *src = read_file(in_path, &srclen);
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
    /* PHP's ext/tidy dispatches on tidyOptGetType: indent is an Enum/Integer
       option (no=0), output-xhtml and preserve-entities are Boolean. */
    tidyOptSetInt(doc, tidyOptGetIdForName("indent"), 0);
    tidyOptSetBool(doc, tidyOptGetIdForName("output-xhtml"), yes);
    tidyOptSetInt(doc, tidyOptGetIdForName("wrap"), 0);
    if (preserve_entities)
        tidyOptSetBool(doc, tidyOptGetIdForName("preserve-entities"), yes);

    TidyBuffer inbuf;
    tidyBufInit(&inbuf);
    tidyBufAppend(&inbuf, wrapped, (uint)wrapped_len);
    tidyParseBuffer(doc, &inbuf);

    TidyBuffer save1, save2;
    tidyBufInit(&save1);
    tidyBufInit(&save2);
    tidySaveBuffer(doc, &save1);   /* ext/tidy tidy_doc_update_properties */
    tidySaveBuffer(doc, &save2);   /* ext/tidy cast-to-string in explode() */

    char *s1 = (char *)save1.bp;
    char *s2 = (char *)save2.bp;
    size_t l1 = save1.size, l2 = save2.size;

    if (save1_path) write_file(save1_path, s1, l1);
    if (raw_path) write_file(raw_path, s2, l2);

    size_t midlen = 0;
    char *mid = between_delimiters(s2, l2, &midlen);
    size_t bodylen = 0;
    char *body = remove_all(mid, midlen, "<body>", &bodylen);
    char *body2 = remove_all(body, bodylen, "</body>", &bodylen);

    if (out_path) write_file(out_path, body2, bodylen);
    else if (bodylen && fwrite(body2, 1, bodylen, stdout) != bodylen) die("short write");

    tidyBufFree(&inbuf);
    tidyBufFree(&save1);
    tidyBufFree(&save2);
    tidyRelease(doc);
    free(src);
    free(wrapped);
    free(mid);
    free(body);
    free(body2);
    return 0;
}
