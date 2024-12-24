#include "start_game.h"
#include "../../player/player.h"
#include "../../arrow_function.h"
#include "../../food/food.h"
#include "../../game/game.h"
#include "../../scorce/score.h"
#include "../../save_mouse/save_text/save_text.h"
#include "../../screen/screen.h"
#include "../../snake/snake.h"
void start_game(){
    player bazikon;
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
