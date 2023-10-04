

#include "StraightMino.h"



StraightMino::StraightMino()
: Tetromino()
{
    _blocks[0].x -= 2;
    _blocks[1].x -= 1;
    _blocks[3].x += 1;
}

bool StraightMino::Rotate()
{
    Math::Rotate90(_blocks, _blocks[2]);
    switch (_eSpin) {
        case ONE:
            _blocks[0].y += 1;
            _blocks[1].y += 1;
            _blocks[2].y += 1;
            _blocks[3].y += 1;
            _eSpin = TWO;
            break;

        case TWO:
            _blocks[0].x -= 1;
            _blocks[1].x -= 1;
            _blocks[2].x -= 1;
            _blocks[3].x -= 1;
            _eSpin = THR;
            break;
        case THR:
            _blocks[0].y -= 1;
            _blocks[1].y -= 1;
            _blocks[2].y -= 1;
            _blocks[3].y -= 1;
            _eSpin = FOU;
            break;
        case FOU:
            _blocks[0].x += 1;
            _blocks[1].x += 1;
            _blocks[2].x += 1;
            _blocks[3].x += 1;
            _eSpin = ONE;
            break;
        default:
            return false;
    }
    return true;
}