#!/bin/bash

main() {
    build_type=$1
    script_dir=$(dirname $0)
    test_dir="${script_dir}/../build/${build_type}/test/"
    run_build $script_dir $build_type
    run_tests $test_dir
}

run_build() {
    script_dir=$1
    build_type=$2
    ./${script_dir}/build.sh $build_type
    build_exit_code=$?
    if [ $build_exit_code -ne 0 ]; then
        echo "Non 0 exit code on build"
        exit $build_exit_code
    fi
}

run_tests() {
    test_dir=$1
    ./${test_dir}/game_test
}

print_usage() {
    echo -e """Usage:
\ttest.sh [build-type]
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
