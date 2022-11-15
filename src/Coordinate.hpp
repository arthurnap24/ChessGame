#pragma once
#include "Axis.h"

namespace ChessGame {

struct Coordinate {
    X x_;
    Y y_;

    bool operator==(const Coordinate& rhs) const {
        return x_ == rhs.x_ && y_ == rhs.y_;
    }
};

}
