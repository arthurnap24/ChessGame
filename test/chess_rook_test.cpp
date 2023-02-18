#include "fixtures/ChessPieceMovementTest.hpp"
#include "Rook.h"
#include "RookMovementSkill.h"

#include <gtest/gtest.h>

namespace {

using namespace ChessGame;

using RookTest = fixtures::ChessPieceMovementTest<Rook, RookMovementSkill>;

TEST_F(RookTest, MoveUp)
{
    Coordinate src{X::A, Y::ONE};
    expect_move_ok(src, {X::A, Y::TWO});
    expect_move_ok(src, {X::A, Y::THREE});
    expect_move_ok(src, {X::A, Y::FOUR});
    expect_move_ok(src, {X::A, Y::FIVE});
    expect_move_ok(src, {X::A, Y::SIX});
    expect_move_ok(src, {X::A, Y::SEVEN});
    expect_move_ok(src, {X::A, Y::EIGHT});
}

}
