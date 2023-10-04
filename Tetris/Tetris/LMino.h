#pragma once

#include "Tetromino.h"

class LMino : public Tetromino
{
public:
    LMino();
    bool Rotate() override final;
};

