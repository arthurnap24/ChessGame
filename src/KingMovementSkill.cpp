#include "KingMovementSkill.h"

#include <cstdlib>
#include <iostream>

namespace ChessGame {

bool KingMovementSkill::move(const King& king,
    const Coordinate& src,
    const Coordinate& dst)
{
    return is_neighbor(src, dst);
}

bool KingMovementSkill::is_neighbor(const Coordinate& src, const Coordinate& dst)
{
    if (src == dst) return false;
    uint8_t x_distance = std::abs(
        static_cast<uint8_t>(dst.x_) - static_cast<uint8_t>(src.x_));
    uint8_t y_distance = std::abs(
        static_cast<uint8_t>(dst.y_) - static_cast<uint8_t>(src.y_));
    return (x_distance <= 1) && (y_distance <= 1);
}

}
