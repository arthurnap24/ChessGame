#pragma once

#include "IGame.h"

#include <memory>

namespace Game {

class GameRunner 
{
public:
    GameRunner(IGame& game) : game_(game) {}

    bool start() { return game_.start(); }
    bool stop() { return game_.stop(); }

private:
    IGame& game_;
};

}
