#pragma once

#include "Coordinate.hpp"
#include "Rook.h"

namespace ChessGame {

class RookMovementSkill
{
public:
    bool move(
        const Rook& rook,
        const Coordinate& src,
        const Coordinate& dst);
private:
    bool is_straight_path(
        const Coordinate& src,
        const Coordinate& dst);
};

}
