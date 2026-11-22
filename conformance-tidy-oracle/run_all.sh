#!/bin/sh
# Rebuild the oracle driver and regenerate the full three-way accounting.
set -eu
cd "$(dirname "$0")"
./build.sh
python3 three_way.py
python3 classify.py
echo "accounting written: three-way-results.jsonl classified-results.jsonl"
