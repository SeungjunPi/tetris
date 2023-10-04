#include "LMino.h"

LMino::LMino()
    : Tetromino()
{
    // pivot: 3nd block
    _blocks[0].x -= 1;
    _blocks[0].y -= 1;
    _blocks[1].x -= 1;
    _blocks[3].x += 1;
}


bool LMino::Rotate()
{
    // pivot: 3rd block
    Math::Rotate90(_blocks, _blocks[2]);

    return true;
}