#pragma once

#include "Coordinate.hpp"

#include <gtest/gtest.h>

namespace fixtures {

using namespace ChessGame;

const uint8_t kMinX = static_cast<uint8_t>(X::A);
const uint8_t kMaxX = static_cast<uint8_t>(X::H);
const uint8_t kMinY = static_cast<uint8_t>(Y::ONE);
const uint8_t kMaxY = static_cast<uint8_t>(Y::EIGHT);

template <typename ChessPieceType, typename ChessPieceMovementSkillType>
class ChessPieceMovementTest : public ::testing::Test {
protected:
    void expect_move_ok(const Coordinate& src, const Coordinate& dst)
    {
        EXPECT_TRUE(move_from_to(src, dst));
    }

    void expect_move_ok(int x_offset, int y_offset)
    {
        for (uint8_t x = kMinX; x <= kMaxX; ++x) {
            for (uint8_t y = kMinY; y <= kMaxY; ++y) {
                int dst_x = x + x_offset;
                int dst_y = y + y_offset;
                bool is_dst_outside = dst_x < 1 || dst_x > 8 
                    || dst_y < 1 || dst_y > 8;
                if (is_dst_outside) {
                    continue;
                }
                Coordinate src{static_cast<X>(x), static_cast<Y>(y)};
                Coordinate dst{static_cast<X>(static_cast<uint8_t>(dst_x)),
                    static_cast<Y>(static_cast<uint8_t>(dst_y))};
                expect_move_ok(src, dst);
            }
        }
    }

    void expect_cannot_move_vertical()
    {
        for (uint8_t x = kMinX; x <= kMaxX; ++x) {
            for (uint8_t y = kMinY; y <= kMaxY; ++y) {
                // TODO: implement loop that expect_move_bad() on any movement up/down of any length
                EXPECT_TRUE(false);
            }
        }
    }

    void expect_cannot_move_horizontal()
    {
        for (uint8_t x = kMinX; x <= kMaxX; ++x) {
            for (uint8_t y = kMinY; y <= kMaxY; ++y) {
                // TODO: implement loop that expect_move_bad() on any movement right/left of any length
                EXPECT_TRUE(false);
            }
        }
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
