#pragma once

#include "Coordinate.h"
#include "King.h"

namespace ChessGame {

class ChessSkill {
public:
    bool move(const King& king, 
        const Coordinate& src,
        const Coordinate& dst);
private:
    bool is_neighbor(const Coordinate& src, const Coordinate& dst);
};

}
