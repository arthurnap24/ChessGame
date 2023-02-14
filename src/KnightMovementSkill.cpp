#include "KnightMovementSkill.h"

#include <cstdlib>

namespace ChessGame {

bool KnightMovementSkill::move(
        const Knight& knight,
        const Coordinate& src,
        const Coordinate& dst)
{
    return is_L_shaped(src, dst);
}

bool KnightMovementSkill::has_long_and_short_stem(
    const Coordinate& src,
    const Coordinate& dst)
{
    uint8_t x_distance = std::abs(
        static_cast<uint8_t>(dst.x_) - static_cast<uint8_t>(src.x_));
    uint8_t y_distance = std::abs(
        static_cast<uint8_t>(dst.y_) - static_cast<uint8_t>(src.y_));
    bool is_stems_sum_3 = (x_distance + y_distance) == 3;
    bool is_stems_valid = (x_distance != 0) and (y_distance != 0);
    return is_stems_sum_3 && is_stems_valid;
}

bool KnightMovementSkill::is_L_shaped(
    const Coordinate& src,
    const Coordinate& dst)
{
    return has_long_and_short_stem(src, dst);
}

}