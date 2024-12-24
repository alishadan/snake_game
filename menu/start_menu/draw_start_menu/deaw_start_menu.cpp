#include "deaw_start_menu.h"
#include <iostream>
#include <windows.h>
#include "../../../global/global.h"
#include"../../end_menu/draw_end_menu/draw_end_menu.h"
using namespace std;
void draw_menu_start(void){

    cout<< "#################"<<endl;
    cout<<"#   New Game    #"<<endl;
    cout<<"#---------------#"<<endl;


    cout<<"#   Continue    #"<<endl;
    cout<<"#---------------#"<<endl;


    cout<<"#     records   #"<<endl;
    cout<<"#---------------#"<<endl;


    cout<<"#    players    #"<<endl;
    cout<<"#---------------#"<<endl;


    cout<<"#     about     #"<<endl;
    cout<<"#---------------#"<<endl;


    cout<<"#     exit      #"<<endl;
    cout<< "#################"<<endl;

    draw_end_menu();
    COORD coord0={0,0};

    SetConsoleCursorPosition(hConsole,coord0);
}
