#include "BishopMovementSkill.h"

#include <cstdlib>

namespace ChessGame {

bool BishopMovementSkill::move(const Bishop& bishop,
    const Coordinate& src,
    const Coordinate& dst)
{
    return is_diagonal(src, dst);
}

bool BishopMovementSkill::is_diagonal(const Coordinate& src, const Coordinate& dst)
{
    if (src == dst) return false;
    uint8_t x_distance = std::abs(
        static_cast<uint8_t>(dst.x_) - static_cast<uint8_t>(src.x_));
    uint8_t y_distance = std::abs(
        static_cast<uint8_t>(dst.y_) - static_cast<uint8_t>(src.y_));
    return x_distance == y_distance;
}

}
