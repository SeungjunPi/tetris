#pragma once

#include "Macro.h"
#include "Math.h"


class Tetromino
{
public:
    Tetromino();

    bool MoveDown();
    bool MoveRight();
    bool MoveLeft();
    
    void Draw(char* board);

    virtual bool Rotate() { return false; }
//    virtual bool IsRotatable();
protected:
    Math::Coordinate _blocks[NUM_BLOCKS];

    enum ESpin
    {
        ONE = 0,
        TWO = 1,
        THR = 2,
        FOU = 3,
    };

    ESpin _eSpin;

private:
};


