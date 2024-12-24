#include "harkat.h"

void harkat(arrows &key,snake &mar,screen &safhe,food &khorak){


        if (key==key_down){
            mar.pos_snake[0]=mar.pos_snake[1];
            mar.pos_snake[1]=mar.pos_snake[2];
            ++mar.pos_snake[2].Y;


            if (mar.pos_snake[2].Y>=safhe.height)
                mar.pos_snake[2].Y=1;
            safhe.draw();
            mar.draw();
            khorak.draw();
          }// if

        if (key==key_up){
            mar.pos_snake[0]=mar.pos_snake[1];
            mar.pos_snake[1]=mar.pos_snake[2];
            --mar.pos_snake[2].Y;
                if (mar.pos_snake[2].Y<1)
                    mar.pos_snake[2].Y=safhe.height-1;
                safhe.draw();
                mar.draw();
                khorak.draw();
        }

        if (key==key_right)
                {
            mar.pos_snake[0]=mar.pos_snake[1];
            mar.pos_snake[1]=mar.pos_snake[2];
            ++mar.pos_snake[2].X;
                if (mar.pos_snake[2].X>=safhe.width)
                    mar.pos_snake[2].X=1;
                safhe.draw();
                mar.draw();
                khorak.draw();
            }

            if (key==key_left)
                {
            mar.pos_snake[0]=mar.pos_snake[1];
            mar.pos_snake[1]=mar.pos_snake[2];
            --mar.pos_snake[2].X;
                    if (mar.pos_snake[2].X<1)
                    mar.pos_snake[2].X=safhe.width-1;
                    safhe.draw();
                    mar.draw();
                    khorak.draw();
            }
}
