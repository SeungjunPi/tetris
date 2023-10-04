#pragma once
class Math
{
public:
    struct Coordinate {
        short x;
        short y;
    };

    static void Rotate90(Coordinate* coordinates, const Coordinate pivot);

};

