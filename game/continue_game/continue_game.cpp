#include "continue_game.h"
#include "windows.h"
#include "../../file/loadFile/loadFile.h"
#include "../../screen/screen.h";
#include "../../snake/snake.h"
#include "../../food/food.h"
#include "../../arrow_function.h"
#include "../game.h"

void continue_game(void){
    player bazikon;
    score nomreh;

    loadFile(bazikon, nomreh);
    screen safhe;
    snake mar;
    arrows key=key_down;
    food khorak;
    run_game(safhe,mar,key,khorak,nomreh,bazikon);
}
