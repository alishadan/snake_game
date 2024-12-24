#include "khord.h"
void khord(snake mar, food &khorak,score& nomre){

    if (mar.pos_snake[2].Y>khorak.coord.Y-2
        && mar.pos_snake[2].Y<khorak.coord.Y+2
         && mar.pos_snake[2].X>khorak.coord.X-2
         && mar.pos_snake[2].X<khorak.coord.X+2){
                    //change position of food
                    khorak.change_coord_food();
                    nomre.nomre++;



                    // insert a unit to snake

            }
}
