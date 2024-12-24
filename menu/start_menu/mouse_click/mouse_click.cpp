#include "mouse_click.h"
#include <windows.h>
#include "../../../global/global.h"
#include "../../../game/new_game/new_game.h"
void mouse_click_start_menu(void){
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
             if (input_buffer[i].Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED){
                if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<20
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>0
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<21
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>0
                     )
                     {
                         new_game();

                     }//if

             }//second if mouse event type
        }//first if mouse event

    }//end for
}//end function
