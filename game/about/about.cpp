#include "about.h"
#include <iostream>
#include "../../scorce/score.h"
#include "../../player/player.h"
#include "../../menu/end_menu/end_menu.h"
#include "../../menu/end_menu/draw_end_menu/draw_end_menu.h"
using namespace std;

void about_snake(void){
    system("cls");

    cout<< "this game is first game writed  by Ali Shadan " << endl;
    cout << "I hope this game a door to great world of programming" << endl;
    cout<< "for use of this game use of arow keys  and mouse" <<endl;
    cout << " this game is for windows platform ad run and tested on windows 10 and succed"<<endl;
    cout << " for call with me use following informations" <<endl;
    cout <<"my Email is alishadan84@gmail.com"<<endl;
    cout <<" my phone is +989380560509 "<<endl;
    cout << " I have WhatsUp and Telegram app on my phone"<<endl;

    draw_end_menu();

    system("pause");
    score nomreh; player bazikon;

    end_menu( nomreh, bazikon);



}
