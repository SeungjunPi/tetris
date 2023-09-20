#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <string>

#include "Macro.h"

#include "Drawer.h"


#define TEST_BOARD "\
          \
    asdf  \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
          \
"



int main()
{
    Drawer drawer;
    drawer.Draw();

    // Game.Initiate

    // Game.Run


    drawer.Draw(TEST_BOARD);
    drawer.Draw();

}
