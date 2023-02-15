#include "KnightMovementSkill.h"

#include <cstdlib>

namespace ChessGame {

bool KnightMovementSkill::move(
        const Knight& knight,
        const Coordinate& src,
        const Coordinate& dst)
{
    return is_L_shaped_path(src, dst);
}

bool KnightMovementSkill::is_L_shaped_path(
    const Coordinate& src,
    const Coordinate& dst)
{
    uint8_t x_stem = std::abs(
        static_cast<uint8_t>(dst.x_) - static_cast<uint8_t>(src.x_));
    uint8_t y_stem = std::abs(
        static_cast<uint8_t>(dst.y_) - static_cast<uint8_t>(src.y_));
    bool is_stems_positive = (x_stem > 0 and y_stem > 0);
    bool has_long_short_stems = is_stems_positive and (x_stem + y_stem == 3);
    return has_long_short_stems;
}

}
