#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
#include <windows.h>
#include "../global/global.h"
using namespace std;
struct player{
    string name;

    //cin<<name;
    COORD coord={0,17};
    void draw (void);



};
#endif // PLAYER_H
