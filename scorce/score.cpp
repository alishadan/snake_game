#include "score.h"
#include <windows.h>
#include <iostream>
#include "../global/global.h"
using namespace std;
void score::draw(void){
    SetConsoleCursorPosition(hConsole,this->coord);
    cout<< "SCORE= " <<this->nomre<<endl;

}
