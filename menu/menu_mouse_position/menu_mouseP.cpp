#include "menu_mouseP.h"
#include "../../global/global.h"
#include "../menu.h"
COORD select_start (void){
    //SetConsoleCursorPosition(hConsole,coord);
    INPUT_RECORD input_buffer[128]; // name of array is a pointer;
    DWORD nLength=128;
    DWORD NumberInput;
    SetConsoleMode(iConsole,ENABLE_WINDOW_INPUT|ENABLE_EXTENDED_FLAGS|ENABLE_MOUSE_INPUT  );
    //GetNumberOfConsoleInputEvents(iConsole,&nLength);
    ReadConsoleInput(iConsole,input_buffer,nLength,&NumberInput);
    DWORD i;

    COORD coord_return;

    for (i=0; i<NumberInput ; i++){
        if (input_buffer[i].EventType==MOUSE_EVENT){
            if( input_buffer[i].Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED
               && input_buffer[i].Event.MouseEvent.dwEventFlags==0){
                    coord_return= input_buffer[i].Event.MouseEvent.dwMousePosition;
                return coord_return;
               }

                }//end if first
            }//end for
   // }//end while
}
