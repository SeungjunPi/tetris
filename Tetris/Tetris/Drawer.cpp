#include <iostream>

#include "Drawer.h"

#define DEFAULT_DRAW_BOARD "\
------------\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
|          |\r\n\
------------\r\n\0"


Drawer::Drawer()
{
    size_t len = sizeof(DEFAULT_DRAW_BOARD);
    size_t totalLength = (NUM_ROWS + 2) * (NUM_COLS + 4);
    _drawBoard = new char[totalLength + 1];

    const char* src = DEFAULT_DRAW_BOARD;
    char* dst = _drawBoard;
    while (*src != '\0') {
        *dst++ = *src++;
    }

    _drawBoard[totalLength] = '\0';

    dst = _drawBoard + NUM_COLS + 4 + 1;
    for (int i = 0; i < NUM_ROWS; ++i) {
        _rows[i] = dst;
        dst += NUM_COLS + 4;
    }
}

void Drawer::Draw()
{
    printf(_drawBoard);
}

void Drawer::UpdateBoard(const char* board)
{
    for (int i = 0; i < NUM_ROWS; ++i) {
        char* dst = _rows[i];
        for (int j = 0; j < NUM_COLS; ++j) {
            *dst++ = *board++;
        }
    }
}
