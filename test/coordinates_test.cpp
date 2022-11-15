#include "Coordinate.hpp"

#include <gtest/gtest.h>

namespace {

using namespace ChessGame;

TEST(CoordinatesTest, EqualCoordinatesTest)
{
    Coordinate src{X::A, Y::ONE};
    Coordinate dst{X::A, Y::ONE};
    EXPECT_EQ(src, dst);
}

TEST(CoordinatesTest, UnequalCoordinatesTest)
{
    Coordinate src{X::H, Y::THREE};
    Coordinate dst{X::B, Y::EIGHT};
    EXPECT_NE(src, dst);
}

}
