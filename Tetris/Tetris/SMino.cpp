#include "SMino.h"

SMino::SMino()
    : Tetromino()
{
    // pivot: 2nd block
    _blocks[0].x -= 1;
    _blocks[2].y -= 1;
    _blocks[3].y -= 1;
    _blocks[3].x += 1;
}


bool SMino::Rotate()
{
    // pivot: 2rd block
    Math::Rotate90(_blocks, _blocks[1]);

    return true;
}
