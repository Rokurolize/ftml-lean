#!/bin/sh
# Build the libtidy oracle driver against the system libtidy 5.8.0.
# Headers are vendored from the htacg/tidy-html5 5.8.0 tag (fetch once, cache, reuse).
set -eu
cd "$(dirname "$0")"
LIB=/usr/lib/x86_64-linux-gnu/libtidy.so.58
if [ ! -e "$LIB" ]; then LIB=$(ldconfig -p | awk '/libtidy.so.58/{print $NF; exit}'); fi
${CC:-gcc} -O2 -Wall -Wextra -Iinclude -o tidy_oracle tidy_oracle.c "$LIB"
echo "built $(pwd)/tidy_oracle against $LIB"
