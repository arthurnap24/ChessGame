#pragma once

#include "Coordinate.hpp"
#include "Knight.h"


namespace ChessGame {

class KnightMovementSkill {
public:
    bool move(
        const Knight& knight,
        const Coordinate& src,
        const Coordinate& dst);
private:
    bool is_L_shaped_path(
        const Coordinate& src,
        const Coordinate& dst);
};

}
