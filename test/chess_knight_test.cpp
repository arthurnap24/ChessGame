#include "fixtures/ChessPieceMovementTest.hpp"
#include "Knight.h"
#include "KnightMovementSkill.h"

#include <gtest/gtest.h>

namespace {

using namespace ChessGame;

using KnightTest = fixtures::ChessPieceMovementTest<Knight, KnightMovementSkill>;

TEST_F(KnightTest, MoveVertical)
{
    expect_cannot_move_vertical();
}

TEST_F(KnightTest, MoveHorizontal)
{
    expect_cannot_move_horizontal();
}

TEST_F(KnightTest, MoveLeftTwiceUpOnce)
{
    expect_move_ok(-2, 1);
}

TEST_F(KnightTest, MoveLeftTwiceDownOnce)
{
    expect_move_ok(-2, -1);
}

TEST_F(KnightTest, MoveRightTwiceUpOnce)
{
    expect_move_ok(2, 1);
}

TEST_F(KnightTest, MoveRightTwiceDownOnce)
{
    expect_move_ok(2, -1);
}

TEST_F(KnightTest, MoveLeftOnceUpTwice)
{
    expect_move_ok(-1, 2);
}

TEST_F(KnightTest, MoveLeftOnceDownTwice)
{
    expect_move_ok(-1, -2);
}

TEST_F(KnightTest, MoveRightOnceUpTwice)
{
    expect_move_ok(1, 2);
}

TEST_F(KnightTest, MoveRightOnceDownTwice)
{
    expect_move_ok(1, -2);
}


// TEST_F(KnightTest, MoveUp)
// {
//     expect_cannot_move_vertical();
//     Coordinate src{X::A, Y::ONE};
//     expect_move_bad(src, {X::A, Y::TWO});
//     expect_move_bad(src, {X::A, Y::THREE});
//     expect_move_bad(src, {X::A, Y::FOUR});
//     expect_move_bad(src, {X::A, Y::FIVE});
//     expect_move_bad(src, {X::A, Y::SIX});
//     expect_move_bad(src, {X::A, Y::SEVEN});
//     expect_move_bad(src, {X::A, Y::EIGHT});
// }

// TEST_F(KnightTest, MoveDown)
// {
//     Coordinate src{X::A, Y::EIGHT};
//     expect_move_bad(src, {X::A, Y::SEVEN});
//     expect_move_bad(src, {X::A, Y::SIX});
//     expect_move_bad(src, {X::A, Y::FIVE});
//     expect_move_bad(src, {X::A, Y::FOUR});
//     expect_move_bad(src, {X::A, Y::THREE});
//     expect_move_bad(src, {X::A, Y::TWO});
//     expect_move_bad(src, {X::A, Y::ONE});
// }

// TEST_F(KnightTest, MoveLeft)
// {
//     Coordinate src{X::H, Y::ONE};
//     expect_move_bad(src, {X::G, Y::ONE});
//     expect_move_bad(src, {X::F, Y::ONE});
//     expect_move_bad(src, {X::E, Y::ONE});
//     expect_move_bad(src, {X::D, Y::ONE});
//     expect_move_bad(src, {X::C, Y::ONE});
//     expect_move_bad(src, {X::B, Y::ONE});
//     expect_move_bad(src, {X::A, Y::ONE});
// }

// TEST_F(KnightTest, MoveRight)
// {
//     Coordinate src{X::A, Y::ONE};
//     expect_move_bad(src, {X::B, Y::ONE});
//     expect_move_bad(src, {X::C, Y::ONE});
//     expect_move_bad(src, {X::D, Y::ONE});
//     expect_move_bad(src, {X::E, Y::ONE});
//     expect_move_bad(src, {X::F, Y::ONE});
//     expect_move_bad(src, {X::G, Y::ONE});
//     expect_move_bad(src, {X::H, Y::ONE});
// }

// TEST_F(KnightTest, MoveNE)
// {
//     Coordinate src{X::A, Y::ONE};
//     expect_move_bad(src, {X::B, Y::TWO});
//     expect_move_bad(src, {X::C, Y::THREE});
//     expect_move_bad(src, {X::D, Y::FOUR});
//     expect_move_bad(src, {X::E, Y::FIVE});
//     expect_move_bad(src, {X::F, Y::SIX});
//     expect_move_bad(src, {X::G, Y::SEVEN});
//     expect_move_bad(src, {X::H, Y::EIGHT});
// }

// TEST_F(KnightTest, MoveNW)
// {
//     Coordinate src{X::H, Y::ONE};
//     expect_move_bad(src, {X::G, Y::TWO});
//     expect_move_bad(src, {X::F, Y::THREE});
//     expect_move_bad(src, {X::E, Y::FOUR});
//     expect_move_bad(src, {X::D, Y::FIVE});
//     expect_move_bad(src, {X::C, Y::SIX});
//     expect_move_bad(src, {X::B, Y::SEVEN});
//     expect_move_bad(src, {X::A, Y::EIGHT});
// }

// TEST_F(KnightTest, MoveSE)
// {
//     Coordinate src{X::A, Y::EIGHT};
//     expect_move_bad(src, {X::B, Y::SEVEN});
//     expect_move_bad(src, {X::C, Y::SIX});
//     expect_move_bad(src, {X::D, Y::FIVE});
//     expect_move_bad(src, {X::E, Y::FOUR});
//     expect_move_bad(src, {X::F, Y::THREE});
//     expect_move_bad(src, {X::G, Y::TWO});
//     expect_move_bad(src, {X::H, Y::ONE});
// }

// TEST_F(KnightTest, MoveSW)
// {
//     Coordinate src{X::H, Y::EIGHT};
//     expect_move_bad(src, {X::G, Y::SEVEN});
//     expect_move_bad(src, {X::F, Y::SIX});
//     expect_move_bad(src, {X::E, Y::FIVE});
//     expect_move_bad(src, {X::D, Y::FOUR});
//     expect_move_bad(src, {X::C, Y::THREE});
//     expect_move_bad(src, {X::B, Y::TWO});
//     expect_move_bad(src, {X::A, Y::ONE});
// }

// TEST_F(KnightTest, MoveSameSpotCorners)
// {
//     Coordinate bottom_left{X::A, Y::ONE};
//     Coordinate bottom_right{X::H, Y::ONE};
//     Coordinate top_left{X::A, Y::EIGHT};
//     Coordinate top_right{X::H, Y::EIGHT};
//     expect_move_bad(bottom_left, bottom_left);
//     expect_move_bad(bottom_right, bottom_right);
//     expect_move_bad(top_left, top_left);
//     expect_move_bad(top_right, top_right);
// }

}
