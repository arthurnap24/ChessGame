#pragma once

class IGame {
public:
    virtual ~IGame() {}

    virtual bool start() = 0;
    virtual bool stop() = 0;
};
