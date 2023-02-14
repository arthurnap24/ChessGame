cmake_minimum_required(VERSION 3.18)
project(ChessGame)

include(${CMAKE_SOURCE_DIR}/conan/conan.cmake)

conan_cmake_run(REQUIRES gtest/1.10.0
                BASIC_SETUP)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)
