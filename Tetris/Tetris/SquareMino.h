#pragma once

#include "Tetromino.h"

class SquareMino : public Tetromino
{
public:
    SquareMino();
    bool Rotate() override final;
};

