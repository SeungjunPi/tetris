#include <windows.h>

#include "Drawer.h"
#include "Game.h"


int main(int argc, char* args[])
{
    Drawer drawer;

    Game game;
    const char* gameBoard = game.GetBoard();
    drawer.UpdateBoard(gameBoard);
    drawer.Draw();
    
    Sleep(500);
    game.Rotate();
    gameBoard = game.GetBoard();
    drawer.UpdateBoard(gameBoard);
    drawer.Draw();

    Sleep(500);
    game.Rotate();
    gameBoard = game.GetBoard();
    drawer.UpdateBoard(gameBoard);
    drawer.Draw();

    Sleep(500);
    game.Rotate();
    gameBoard = game.GetBoard();
    drawer.UpdateBoard(gameBoard);
    drawer.Draw();

    Sleep(500);
    game.Rotate();
    gameBoard = game.GetBoard();
    drawer.UpdateBoard(gameBoard);
    drawer.Draw();

    return 0;
}