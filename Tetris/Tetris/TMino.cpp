#include "TMino.h"

TMino::TMino() 
    : Tetromino()
{
    // pivot: 3rd block
    _blocks[0].x -= 1;
    _blocks[1].y -= 1;
    _blocks[3].x += 1;
}

bool TMino::Rotate()
{
    // pivot: 3rd block
    Math::Rotate90(_blocks, _blocks[2]);
    return true;
}

