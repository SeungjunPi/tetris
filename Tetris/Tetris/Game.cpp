//
//  Game.cpp
//  Tetris_mac
//
//  Created by jun on 9/30/23.
//

#include <memory>

#include "Game.hpp"


Game::Game()
: _current(Math::Coordinate{ 0, })
{
    _drawBoardBackground = new char[NUM_ROWS * NUM_COLS];
    _drawBoardWithTetromino = new char[NUM_ROWS * NUM_COLS];
    
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            _drawBoardBackground[i * NUM_COLS +j] = ' ';
            _drawBoardWithTetromino[i * NUM_COLS +j] = ' ';
        }
    }
};


bool Game::Rotate()
{
    // Todo: Add Check Logic
    
    _current.Rotate();
    
    return true;
}

const char* Game::GetBoard()
{
    memcpy(_drawBoardWithTetromino, _drawBoardBackground, NUM_ROWS * NUM_COLS);
    
    _current.Draw(_drawBoardWithTetromino);
    
    return _drawBoardWithTetromino;
}
