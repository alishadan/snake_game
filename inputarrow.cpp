#include <windows.h>
#include <stdio.h>
#include "arrow_function.h"
#include "global/global.h"

arrows InputKeyboard(void){
    INPUT_RECORD input_buffer[128]; // name of array is a pointer;
    DWORD nLength=128;
    DWORD NumberInput;
    HANDLE iConsole=GetStdHandle(STD_INPUT_HANDLE);
    SetConsoleMode(iConsole,ENABLE_WINDOW_INPUT|ENABLE_EXTENDED_FLAGS );
    ReadConsoleInput(iConsole,input_buffer,nLength,&NumberInput);
    DWORD i;
    int counter=0;
    for (i=0; i<NumberInput ; i++){


            if (input_buffer[i].EventType==KEY_EVENT){
                if (input_buffer[i].Event.KeyEvent.wVirtualKeyCode==VK_LEFT)
                    return key_left;
                if (input_buffer[i].Event.KeyEvent.wVirtualKeyCode==VK_RIGHT)
                    return key_right;
                if (input_buffer[i].Event.KeyEvent.wVirtualKeyCode==VK_UP)
                    return key_up;
                if (input_buffer[i].Event.KeyEvent.wVirtualKeyCode==VK_DOWN)
                    return key_down;
                if (input_buffer[i].Event.KeyEvent.wVirtualKeyCode==VK_RETURN)
                    return enter;
            }//first if
    } //first for

}
