#include "fixtures/ChessPieceMovementTest.hpp"
#include "Bishop.h"
#include "BishopMovementSkill.h"

#include <gtest/gtest.h>

namespace {

using namespace ChessGame;

using BishopTest = fixtures::ChessPieceMovementTest<Bishop, BishopMovementSkill>;

TEST_F(BishopTest, MoveNE)
{
    Coordinate src{X::A, Y::ONE};
    expect_move_ok(src, {X::B, Y::TWO});
    expect_move_ok(src, {X::C, Y::THREE});
    expect_move_ok(src, {X::D, Y::FOUR});
    expect_move_ok(src, {X::E, Y::FIVE});
    expect_move_ok(src, {X::F, Y::SIX});
    expect_move_ok(src, {X::G, Y::SEVEN});
    expect_move_ok(src, {X::H, Y::EIGHT});
}

TEST_F(BishopTest, MoveNW)
{
    Coordinate src{X::H, Y::ONE};
    expect_move_ok(src, {X::G, Y::TWO});
    expect_move_ok(src, {X::F, Y::THREE});
    expect_move_ok(src, {X::E, Y::FOUR});
    expect_move_ok(src, {X::D, Y::FIVE});
    expect_move_ok(src, {X::C, Y::SIX});
    expect_move_ok(src, {X::B, Y::SEVEN});
    expect_move_ok(src, {X::A, Y::EIGHT});
}

TEST_F(BishopTest, MoveSE)
{
    Coordinate src{X::A, Y::EIGHT};
    expect_move_ok(src, {X::B, Y::SEVEN});
    expect_move_ok(src, {X::C, Y::SIX});
    expect_move_ok(src, {X::D, Y::FIVE});
    expect_move_ok(src, {X::E, Y::FOUR});
    expect_move_ok(src, {X::F, Y::THREE});
    expect_move_ok(src, {X::G, Y::TWO});
    expect_move_ok(src, {X::H, Y::ONE});
}

TEST_F(BishopTest, MoveSW)
{
    Coordinate src{X::H, Y::EIGHT};
    expect_move_ok(src, {X::G, Y::SEVEN});
    expect_move_ok(src, {X::F, Y::SIX});
    expect_move_ok(src, {X::E, Y::FIVE});
    expect_move_ok(src, {X::D, Y::FOUR});
    expect_move_ok(src, {X::C, Y::THREE});
    expect_move_ok(src, {X::B, Y::TWO});
    expect_move_ok(src, {X::A, Y::ONE});
}

TEST_F(BishopTest, MoveSameSpot)
{
    Coordinate pos{X::D, Y::THREE};
    expect_move_bad(pos, pos);
}

TEST_F(BishopTest, MoveSameSpotCorners)
{
    Coordinate bottom_left{X::A, Y::ONE};
    Coordinate bottom_right{X::H, Y::ONE};
    Coordinate top_left{X::A, Y::EIGHT};
    Coordinate top_right{X::H, Y::EIGHT};
    expect_move_bad(bottom_left, bottom_left);
    expect_move_bad(bottom_right, bottom_right);
    expect_move_bad(top_left, top_left);
    expect_move_bad(top_right, top_right);
}

}
