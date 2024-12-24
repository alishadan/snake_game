#include "screen.h"
#include "../global/global.h"
#include "../menu/end_menu/draw_end_menu/draw_end_menu.h"

// hConsole defined is global.cpp
void screen::draw(void){
    //ofoq bala
     SetConsoleCursorPosition(ScreenBuffer, this->coord1);
    cout<<string (this->width,' #')<<endl;

    //ofoq paiin
    SetConsoleCursorPosition(hConsole, this->coord3);
   cout<<string (this->width,' #')<<endl;

    //amood chap
    SetConsoleCursorPosition(hConsole, this->coord1);
    COORD i;
    i.X=coord1.X;
    i.Y=coord1.Y;
    while (i.Y<=this->height-2) {

        i.Y++;
        SetConsoleCursorPosition(hConsole, i);
    cout<<"#"<<endl;
    }

    //amood rast
    SetConsoleCursorPosition(hConsole, this->coord2);
    COORD j;
    j.X=coord2.X;
    j.Y=coord2.Y;
    while(j.Y<=this->height-2){
        j.Y++;
        SetConsoleCursorPosition(hConsole, j);
        cout<<"#"<<endl;
    }

    draw_end_menu();
}


