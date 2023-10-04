#pragma once

#include "Tetromino.h"

class ZMino : public Tetromino
{
public:
    ZMino();
    bool Rotate() override final;
    
};

