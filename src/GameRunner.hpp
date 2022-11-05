#pragma once

#include "IGame.h"

#include <memory>

class GameRunner 
{
public:
    GameRunner(IGame& game) : game_(game) {}

    bool start() { return game_.start(); }

private:
    IGame& game_;
};
