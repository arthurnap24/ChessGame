#include "ChessSkill.h"

namespace ChessGame {

bool ChessSkill::move(const King& king,
    const Coordinate& src,
    const Coordinate& dst)
{
    return !is_diagonal(src, dst) && is_neighbor(src, dst);
}

bool ChessSkill::is_diagonal(const Coordinate& src, const Coordinate& dst)
{
    bool is_equal_x = src.x_ == dst.x_;
    bool is_equal_y = src.y_ == dst.y_;
    return !is_equal_x && !is_equal_y;
}

bool ChessSkill::is_neighbor(const Coordinate& src, const Coordinate& dst)
{
    return false;
}

}
