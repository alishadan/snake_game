#ifndef SCORE_H
#define SCORE_H
#include <windows.h>



struct score{
    int nomre=0;
    COORD coord={20,2};

    void draw(void);
};
#endif // SCORE_H
