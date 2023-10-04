#include "Math.h"

#include "Macro.h"

void Math::Rotate90(Coordinate* coordinates, const Coordinate pivot)
{
    for (int i = 0; i < NUM_BLOCKS; ++i) {
        short tmp;
        coordinates[i].x -= pivot.x;
        coordinates[i].y -= pivot.y;

        tmp = coordinates[i].x;
        coordinates[i].x = -coordinates[i].y;
        coordinates[i].y = tmp;

        coordinates[i].x += pivot.x;
        coordinates[i].y += pivot.y;
    }
}
