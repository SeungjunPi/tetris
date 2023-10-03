//

#ifndef Game_h
#define Game_h

#include "Math.h"
#include "Macro.h"
#include "Tetromino.h"

class Game
{
public:
    Game();
    ~Game();
    
    bool Run();
    bool Rotate();
    const char* GetBoard();
private:
    char* _drawBoardBackground;
    char* _drawBoardWithTetromino;

    Tetromino* _currentMino;
    Tetromino** _minos;
    size_t _minoCount;

    bool ShuffleMinos();
};



#endif /* Game_h */
