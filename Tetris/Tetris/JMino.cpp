#include "JMino.h"


JMino::JMino()
    : Tetromino()
{
    // pivot: 2nd block
    _blocks[0].x -= 1;
    _blocks[2].x += 1;
    _blocks[3].x += 1;
    _blocks[3].y -= 1;
}

bool JMino::Rotate()
{
    // pivot: 2nd block
    Math::Rotate90(_blocks, _blocks[1]);

    return true;
}