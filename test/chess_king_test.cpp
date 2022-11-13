#include "ChessSkill.h"
#include "Coordinate.h"
#include "King.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace {

using namespace ChessGame;

class KingTest : public ::testing::Test {
protected:
    bool move_up() { return skill_.move(k_, pos_, u_); }
    bool move_down() { return skill_.move(k_, pos_, d_); }
    bool move_left() { return skill_.move(k_, pos_, l_); }
    bool move_right() { return skill_.move(k_, pos_, r_); }
    bool move_nw() { return skill_.move(k_, pos_, nw_); }
    bool move_ne() { return skill_.move(k_, pos_, ne_); }
    bool move_sw() { return skill_.move(k_, pos_, sw_); }
    bool move_se() { return skill_.move(k_, pos_, se_); }
    void is_allowed(bool move_result) { EXPECT_TRUE(move_result); }
    void is_not_allowed(bool move_result) { EXPECT_FALSE(move_result); }

    bool move_from_to(const Coordinate& src, const Coordinate& dst) {
        return skill_.move(k_, src, dst);
    }

private:
    King k_;
    ChessSkill skill_;
    const Coordinate pos_{XAxis::B, YAxis::TWO};
    const Coordinate u_{XAxis::B, YAxis::THREE};
    const Coordinate d_{XAxis::B, YAxis::ONE};
    const Coordinate l_{XAxis::A, YAxis::TWO};
    const Coordinate r_{XAxis::C, YAxis::TWO};
    const Coordinate nw_{XAxis::A, YAxis::THREE};
    const Coordinate ne_{XAxis::C, YAxis::THREE};
    const Coordinate sw_{XAxis::A, YAxis::ONE};
    const Coordinate se_{XAxis::C, YAxis::ONE};
};

TEST_F(KingTest, MoveUp)
{
    is_allowed(move_up());
}

TEST_F(KingTest, MoveDown)
{
    is_allowed(move_down());
}

TEST_F(KingTest, MoveRight)
{
    is_allowed(move_right());
}

TEST_F(KingTest, MoveLeft)
{
    is_allowed(move_left());
}

TEST_F(KingTest, MoveNE)
{
    is_allowed(move_ne());
}

TEST_F(KingTest, MoveNW)
{    
    is_allowed(move_nw());
}

TEST_F(KingTest, MoveSE)
{
    is_allowed(move_se());
}

TEST_F(KingTest, MoveSW)
{
    is_allowed(move_sw());
}

TEST_F(KingTest, MoveUpNonNeighbor)
{
    Coordinate src{XAxis::A, YAxis::ONE};
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::THREE}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::FOUR}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::FIVE}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::SIX}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::SEVEN}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::EIGHT}));
}

TEST_F(KingTest, MoveDownNonNeighbor)
{
    Coordinate src{XAxis::A, YAxis::EIGHT};
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::SIX}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::FIVE}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::FOUR}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::THREE}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::TWO}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::ONE}));
}

TEST_F(KingTest, MoveLeftNonNeighbor)
{
    Coordinate src{XAxis::H, YAxis::ONE};
    is_not_allowed(move_from_to(src, {XAxis::F, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::E, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::D, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::C, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::B, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::A, YAxis::ONE}));
}

TEST_F(KingTest, MoveRightNonNeighbor)
{
    Coordinate src{XAxis::A, YAxis::ONE};
    is_not_allowed(move_from_to(src, {XAxis::C, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::D, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::E, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::F, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::G, YAxis::ONE}));
    is_not_allowed(move_from_to(src, {XAxis::H, YAxis::ONE}));
}

}