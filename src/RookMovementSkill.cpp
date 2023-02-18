#include "RookMovementSkill.h"

namespace ChessGame {

bool RookMovementSkill::move(
    const Rook& rook,
    const Coordinate& src,
    const Coordinate& dst)
{
    return is_straight_path(src, dst);
}

bool RookMovementSkill::is_straight_path(
    const Coordinate& src,
    const Coordinate& dst)
{
    return true;
}

}
