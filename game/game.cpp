#include "game.h"
#include "../arrow_function.h"
#include <windows.h>
#include "jahat/jahat.h"
#include "harkat/harkat.h"
#include "khord/khord.h"
#include "../save_mouse/save_text/save_text.h"
#include "../save_mouse/save_mouse.h"
#include "../clear_screen/clear.h"
#include "../global/global.h"
#include "../menu/end_menu/end_menu.h"

using namespace std;
void run_game (screen safhe,snake mar,arrows key,food khorak,score nomre,player bazikon){

    while(1){
            system("cls");

            jahat(key);


            harkat(key,mar,safhe,khorak);
            khord(mar,khorak,nomre);
            // sabt emtiaz

            bazikon.draw();

            nomre.draw();
            text text;
            text.draw_save_text();
             end_menu(nomre,bazikon);
           //save_mouse(nomre,bazikon);


            Sleep(100);
    }
}
