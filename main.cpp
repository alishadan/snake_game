#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include "arrow_function.h"
#include "screen/screen.h"
#include "snake/snake.h"
#include "food/food.h"
#include "game/game.h"
#include "scorce/score.h"
#include "save_mouse/save_mouse.h"
#include "save_mouse/save_text/save_text.h"
#include <vector>
#include "global/global.h"
#include <thread>
#include "menu/start_menu/start_menu.h"
#include "menu/menu_mouse_position/menu_mouseP.h"
#include "menu/start_menu/draw_start_menu/deaw_start_menu.h"
#include "menu/start_menu/mouse_click/mouse_click.h"
#include "file/loadFile/loadFile.h"
using namespace std;

//DWORD fdwSaveOldMode;



int main (){
    COORD coord={0,2};

    SetConsoleCursorPosition(hConsole,coord);

    cout<< "please wait ..."<<endl;

    Sleep(2000);
    system("cls");
    arrows key=key_down;

    draw_menu_start();


    while(1){
menu_start(key);
//mouse_click_start_menu();


}

return 0;
}
