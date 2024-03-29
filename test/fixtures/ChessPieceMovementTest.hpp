#pragma once

#include "Coordinate.hpp"

#include <gtest/gtest.h>

namespace fixtures {

using namespace ChessGame;

template <typename ChessPieceType, typename ChessPieceMovementSkillType>
class ChessPieceMovementTest : public ::testing::Test {
protected:
    void expect_move_ok(const Coordinate& src, const Coordinate& dst)
    {
        EXPECT_TRUE(move_from_to(src, dst));
    }

    void expect_move_bad(const Coordinate& src, const Coordinate& dst)
    {
        EXPECT_FALSE(move_from_to(src, dst));
    }

private:
    bool move_from_to(const Coordinate& src, const Coordinate& dst) {
        return skill_.move(piece_, src, dst);
    }

    ChessPieceType piece_;
    ChessPieceMovementSkillType skill_;
};

}
