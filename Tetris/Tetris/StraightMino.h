#pragma once


#include "Tetromino.h"


class StraightMino : public Tetromino
{
public:
    StraightMino();
    bool Rotate() final ;
private:
    
};