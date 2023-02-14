cmake_minimum_required(VERSION 3.18)
project(ChessGameTest)

add_executable(game_test main.cpp
    game_runner_test.cpp
    chess_bishop_test.cpp
    chess_king_test.cpp
    chess_knight_test.cpp
    coordinates_test.cpp
    ${CMAKE_SOURCE_DIR}/src/BishopMovementSkill.cpp
    ${CMAKE_SOURCE_DIR}/src/KingMovementSkill.cpp
    ${CMAKE_SOURCE_DIR}/src/KnightMovementSkill.cpp)

target_include_directories(game_test PUBLIC 
    ${CMAKE_SOURCE_DIR}/src/
    ${CMAKE_SOURCE_DIR}/test/mocks/)

target_link_libraries(game_test ${CONAN_LIBS_GTEST})
