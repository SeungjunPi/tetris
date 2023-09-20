#pragma once

#include "Macro.h"
#include "Math.h"


class Tetromino
{
public:

    bool MoveDown();
    bool MoveRight();
    bool MoveLeft();

    virtual bool Rotate();
    virtual bool IsRotatable();


private:
    Math::Coordinate _blocks[NUM_BLOCKS];

};

