#include <thread>
#include <memory>

#include "Game.h"
#include "Drawer.h"

#include "StraightMino.h"
#include "SquareMino.h"
#include "JMino.h"
#include "LMino.h"
#include "TMino.h"
#include "SMino.h"
#include "ZMino.h"

Game::Game()
{
    _drawBoardBackground = new char[NUM_ROWS * NUM_COLS];
    _drawBoardWithTetromino = new char[NUM_ROWS * NUM_COLS];
    
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            _drawBoardBackground[i * NUM_COLS +j] = ' ';
            _drawBoardWithTetromino[i * NUM_COLS +j] = ' ';
        }
    }

    _minos = new Tetromino*[7];
    for (int i = 0; i < 7; ++i) {
        _minos[i] = new ZMino(); // Todo: Mino 종류별 구현 후 넣기
    }

    _currentMino = _minos[0];
    _minoCount = 0;

    // Todo: Add shuffle tetrominos Logic
    
};

Game::~Game()
{
    delete _drawBoardBackground;
    delete _drawBoardWithTetromino;

    for (int i = 0; i < 7; ++i) {
        delete _minos[i];
    }
    delete _minos;
}

bool Game::Run()
{
    //std::thread graphicThread;
    

    return false;
}


bool Game::Rotate()
{
    // Todo: Add Check Logic
    
    _currentMino->Rotate();
    
    return true;
}

const char* Game::GetBoard()
{
    memcpy(_drawBoardWithTetromino, _drawBoardBackground, NUM_ROWS * NUM_COLS);
    
    _currentMino->Draw(_drawBoardWithTetromino);
    
    return _drawBoardWithTetromino;
}


bool Game::ShuffleMinos()
{
    // Todo: Shuffle 구현
    return true;
}