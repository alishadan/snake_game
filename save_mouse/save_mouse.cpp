#include "save_mouse.h"
#include <windows.h>
#include <stdio.h>
#include "../global/global.h"
#include "detect_mouse/detect_mouse.h"
#include "../file/SaveFile/savefile.h"


void save_mouse(score nomreh, player bazikon)
{
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
                 if (input_buffer[i].Event.MouseEvent.dwMousePosition.X<10
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.X>0
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y<21
                     && input_buffer[i].Event.MouseEvent.dwMousePosition.Y>18

                     && input_buffer[i].Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED
                     && input_buffer[i].Event.MouseEvent.dwEventFlags==0
                     ){
                     savefile(nomreh,bazikon);
                     COORD coord1={20,25};
                     SetConsoleCursorPosition(hConsole, coord1);
                     printf("data saved");
                     Sleep(1000);}

    }

}
}



