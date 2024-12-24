#ifndef FOOD_H
#define FOOD_H

#include <windows.h>
#include <iostream>
#include "random_number/random.h"
using namespace std;
struct food{
    COORD coord={random(),random()};

    void draw(void);
    void change_coord_food(void);


};
#endif // FOOD_H
