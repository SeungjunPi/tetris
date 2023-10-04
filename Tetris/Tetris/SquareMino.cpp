#include "SquareMino.h"


SquareMino::SquareMino()
    : Tetromino()
{
    _blocks[0].x -= 1;
    _blocks[0].y -= 1;
    _blocks[1].y -= 1;
    _blocks[3].x -= 1;
}


bool SquareMino::Rotate()
{
    return true;
}


