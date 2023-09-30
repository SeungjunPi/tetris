//
//  Game.hpp
//  Tetris_mac
//
//  Created by jun on 9/30/23.
//

#ifndef Game_hpp
#define Game_hpp

#include "Math.h"
#include "Macro.h"
#include "Tetromino.h"

class Game
{
public:
    Game();
    
    bool Rotate();
    const char* GetBoard();
private:
    char* _drawBoardBackground;
    char* _drawBoardWithTetromino;
    Tetromino _current;
};



#endif /* Game_hpp */
