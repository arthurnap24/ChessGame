#include <iostream>

#include "MockGame.hpp"
#include "GameRunner.hpp"

#include <gtest/gtest.h>

namespace {

using ::testing::Return;

TEST(GameTest, StartGameTest)
{
    mocks::MockGame game;
    EXPECT_CALL(game, start()).Times(1).WillOnce(Return(true));

    Game::GameRunner runner(game);

    bool start_ok = runner.start();
    EXPECT_TRUE(start_ok);
}

TEST(GameTest, StopGameTest)
{
    mocks::MockGame game;
    EXPECT_CALL(game, stop()).Times(1).WillOnce(Return(false));

    Game::GameRunner runner(game);

    bool start_ok = runner.stop();
    EXPECT_FALSE(start_ok);
}

}
