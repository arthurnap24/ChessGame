#include <iostream>

#include "IGame.h"
#include "GameRunner.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

class MockGame : public IGame
{
public:
    MOCK_METHOD0(start, bool());
    MOCK_METHOD0(stop, bool());
};


TEST(GameTest, StartGameTest)
{
    MockGame game;
    GameRunner runner(game);

    // runner.start();

    // std::cout << "hello world\n";

    EXPECT_EQ(true, true);
}