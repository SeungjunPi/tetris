#pragma once

#include "Tetromino.h"

class JMino : public Tetromino
{
public:
    JMino();
    bool Rotate() override final;
};

