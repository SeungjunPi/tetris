#pragma once

#include "Macro.h"



class Drawer
{
public:
    Drawer();
    ~Drawer() { delete _drawBoard; }
    void Draw();
    void Draw(const char* board);
private:
    char* _drawBoard;
    char* _rows[NUM_ROWS];
};

