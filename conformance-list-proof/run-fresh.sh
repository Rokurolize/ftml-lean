#!/bin/sh
id=$(printf "%s" "$1" | sed -n "s/.*\"id\": \"\(s[0-9]*\)\".*/\1/p")
printf "%s\n" "$1" | php php-list-state.php > /tmp/phout/$id.jsonl
