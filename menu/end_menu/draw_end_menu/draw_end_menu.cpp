#include "draw_end_menu.h"
#include <windows.h>
#include <iostream>
#include <windows.h>
#include "../../../global/global.h"
using namespace std;

void draw_end_menu(void){

    COORD coord0={0,20};
    SetConsoleCursorPosition(hConsole,coord0);

    cout<< "################################################################################"<<endl;
    cout<<"#   New Game    #    # stop #    # records #    # sound #   # about #   # exit # "<<endl;
    cout<< "################################################################################"<<endl;




}
