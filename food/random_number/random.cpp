#include <iostream>
#include <random>
#include "random.h"
#include "../../screen/screen.h"
using namespace std;
int random()
{
   int min=1;
   int max=14;
    int rd_num = rand() % (max - min + 1) + min;


    return rd_num;// generate numbers
}
