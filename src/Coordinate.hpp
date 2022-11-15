#pragma once
#include "Axis.h"

namespace ChessGame {

struct Coordinate {
    bool operator==(const Coordinate& rhs) const {
        return x_ == rhs.x_ && y_ == rhs.y_;
    }

    bool operator!=(const Coordinate& rhs) const {
        return x_ != rhs.x_ || y_ != rhs.y_;
    }

    X x_;
    Y y_;
};

}
