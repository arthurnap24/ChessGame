#pragma once

#include "IGame.h"

#include <gmock/gmock.h>

namespace mocks {

class MockGame : public Game::IGame
{
public:
    MOCK_METHOD0(start, bool());
    MOCK_METHOD0(stop, bool());
};

}
