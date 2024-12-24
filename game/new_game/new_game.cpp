#include "new_game.h"
#include "../../arrow_function.h"
#include "../../food/food.h"
#include "../../global/global.h"
#include"../../player/player.h"
#include "../../scorce/score.h"
#include "../../screen/screen.h"
#include "../../snake/snake.h"
#include "../../save_mouse/save_text/save_text.h"
#include "../game.h"

void new_game(void){
    system("cls");
        //vared kardan nam player
        player bazikon;
        cout << "please enter your name as player" << endl;
        cin>>bazikon.name;
        system("cls");


        bazikon.draw();
        score nomre;
        nomre.draw();
        text text;
        text.draw_save_text();


        screen safhe;
        safhe.draw();
        snake mar;
        mar.draw();
        food khorak;
        khorak.draw();
        arrows key= InputKeyboard();


        run_game(safhe,mar,key,khorak,nomre,bazikon);


}
