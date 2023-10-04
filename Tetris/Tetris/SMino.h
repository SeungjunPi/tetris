#pragma once

#include "Tetromino.h"

class SMino : public Tetromino
{
public:
    SMino();
    bool Rotate() override final;
};

