#pragma once

#include "Coordinate.hpp"
#include "King.h"

namespace ChessGame {

class KingMovementSkill {
public:
    bool move(const King& king, 
        const Coordinate& src,
        const Coordinate& dst);
private:
    bool is_neighbor(const Coordinate& src, const Coordinate& dst);
};

}
