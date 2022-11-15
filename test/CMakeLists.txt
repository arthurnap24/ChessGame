cmake_minimum_required(VERSION 3.18)
project(ChessGameTest)

find_package(GTest REQUIRED)

add_executable(game_test main.cpp
    game_runner_test.cpp
    chess_king_test.cpp
    ${CMAKE_SOURCE_DIR}/src/ChessSkill.cpp)

target_include_directories(game_test PUBLIC 
    ${CMAKE_SOURCE_DIR}/src/
    ${CMAKE_SOURCE_DIR}/test/mocks/)

target_link_libraries(game_test
    GTest::gtest
    GTest::gtest_main
    GTest::gmock
    GTest::gmock_main
    GTest::gmock)
