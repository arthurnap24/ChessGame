#!/bin/bash

main() {
    ./build.sh
    script_dir=$(dirname $0)
    build_dir="${script_dir}/../build/"
}

print_usage() {
    echo -e """Usage:
\test.sh [build-type]
Supported build-type values:
release - build release
debug - build debug

Run tests for this project built with the specified build-type.
"""
}

if [[ $1 == "-h" ]]; then
    print_usage
    exit 0
fi

main $@
