#pragma once


#include "Tetromino.h"


class StraightMino : public Tetromino
{
public:
    StraightMino();
    bool Rotate() override final;
private:
    
};