#include "save_text.h"
#include <iostream>
#include "../../global/global.h"
using namespace std;

void text::draw_save_text(void){

    SetConsoleCursorPosition(hConsole, this->coord);
    cout<< "SAVE DATA"<<endl;


}
