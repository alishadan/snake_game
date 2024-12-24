#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <iostream>
#include <vector>

using namespace std;
struct snake{
    COORD coord1={3,3};
    COORD coord2={4,3};
    COORD coord3={5,3};
    vector <COORD> pos_snake={coord1,coord2,coord3};


    unsigned arrow_snake=2;
    unsigned body_snake=3;

    void draw(void);


};
#endif // SNAKE_H
