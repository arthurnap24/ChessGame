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
    bool is_L_shaped(
        const Coordinate& src,
        const Coordinate& dst);
    bool has_long_and_short_stem(
        const Coordinate& src,
        const Coordinate& dst);
};

}
