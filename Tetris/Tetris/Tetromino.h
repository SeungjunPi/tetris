#pragma once

#include "Macro.h"
#include "Math.h"


class Tetromino
{
public:
    Tetromino(Math::Coordinate startingPosition);

    bool MoveDown();
    bool MoveRight();
    bool MoveLeft();
    
    void Draw(char* board);

    virtual bool Rotate();
//    virtual bool IsRotatable();


private:
    enum EDefaultState {
        Vertical = 0,
        Horizontal = 1,
    };
    
    Math::Coordinate _blocks[NUM_BLOCKS];
    EDefaultState _eState;

};


