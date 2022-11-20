#pragma once

#include "Bishop.h"
#include "Coordinate.hpp"

namespace ChessGame {

class BishopMovementSkill
{
public:
    bool move(const Bishop& bishop,
        const Coordinate& src,
        const Coordinate& dst);

private:
    bool is_diagonal(const Coordinate& src, const Coordinate& dst);
};

}
