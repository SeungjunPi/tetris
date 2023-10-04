#pragma once

#include "Tetromino.h"

class TMino : public Tetromino
{
public:
    TMino();
    bool Rotate() override final;
};

