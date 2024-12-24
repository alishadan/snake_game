#include "end_menu.h"
#include "draw_end_menu/draw_end_menu.h"

#include "../../save_mouse/save_mouse.h"
#include <windows.h>
#include <stdio.h>
#include "../../global/global.h"
//#include "detect_mouse/detect_mouse.h"
#include "../../file/SaveFile/savefile.h"
#include <stdlib.h>
#include "../../game/new_game/new_game.h"
#include "../../player/player.h"
#include "../../scorce/score.h"
#include "../../game/about/about.h"
#include "../../game/exit/exit.h"
#include "../../game/records/records.h"

void end_menu(score nomreh, player bazikon){
    draw_end_menu();


    //SetConsoleCursorPosition(hConsole,coord);
    INPUT_RECORD input_buffer[256]; // name of array is a pointer;
    DWORD nLength=256;
    DWORD NumberInput;
    SetConsoleMode(iConsole,ENABLE_WINDOW_INPUT|ENABLE_EXTENDED_FLAGS|ENABLE_MOUSE_INPUT  );
    GetNumberOfConsoleInputEvents(iConsole,&nLength);
    ReadConsoleInput(iConsole,input_buffer,nLength,&NumberInput);
    DWORD i;
    for (i=0; i<NumberInput ; i++){
        if (input_buffer[i].EventType==MOUSE_EVENT){
                if(input_buffer[i].Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED){
                        if( input_buffer[i].Event.MouseEvent.dwEventFlags==0){
                            if(input_buffer[i].Event.MouseEvent.dwMousePosition.X<18
                            && input_buffer[i].Event.MouseEvent.dwMousePosition.X>0
                            && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<23
                            && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>20
                            ){
                                new_game();
                            }// if 18
                        if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<28
                            && input_buffer[i].Event.MouseEvent.dwMousePosition.X>20
                            && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<23
                            && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>20
                     ){
                         system("pause");


                    }//19

                 if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<44
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>34
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<23
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>20
                     ){
                         records_snake();
                    }//34

                 if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<57
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>48
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<23
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>20){

                        cout<<"sound"<<endl;
                     } //48

                 if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<68
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>61
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<23
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>20){

                        about_snake();
                        }//68

                 if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<79
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>73
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<23
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>20){

                     exit_snake();
                     }

                 if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<10
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>0
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<21
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>18){

                     savefile(nomreh,bazikon);
                     COORD coord1={20,25};
                     SetConsoleCursorPosition(hConsole, coord1);
                     printf("data saved");
                     Sleep(1000);
                     }
                }//if(input_buffer[i] second
            }//if(input_buffer[i] first
        }// if mouse_event
    }//end for


} //end function

