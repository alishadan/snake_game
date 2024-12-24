#ifndef SCREEN_H
#define SCREEN_H

#include <windows.h>
#include <iostream>

using namespace std;



struct screen{
    const unsigned  width=15;
    const unsigned height=15;

    const COORD coord1={0,0};
    const COORD coord2={width,0};
    const COORD coord3={0,height};
    const COORD coord4={width,height};



    void draw (void);

};

#endif // SCREEN_H
