#!/bin/bash

main() {
    build_type=$1
    script_dir=$(dirname $0)
    build_dir="${script_dir}/../build/"
    build $build_dir $build_type
}

build() {
    build_dir=$1
    build_type=$2
    check_build_type $build_type
    build_path="${build_dir}/${build_type}"
    cmake -DCMAKE_BUILD_TYPE=${build_type} -B $build_path .
    (cd $build_path; make)
}

check_build_type() {
    build_type=$1
    if [ "$build_type" != "release" ] && [ "$build_type" != "debug" ]
    then
        echo "Invalid build type ${build_type}"
        exit 1
    fi
}

print_usage() {
    echo -e """Usage:
\tbuild.sh [build-type]
Supported build-type values:
release - build release
debug - build debug

Build this project with the specified build-type.
"""
}

if [[ $1 == "-h" ]]; then
    print_usage
    exit 0
fi

main $@
