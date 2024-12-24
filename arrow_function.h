#ifndef ARROW_FUNCTION_H
#define ARROW_FUNCTION_H
#include <windows.h>


enum arrows {key_left,key_right,key_up, key_down , enter };

 arrows InputKeyboard();

VOID ErrorExit(LPSTR);

arrows KeyEventProc(KEY_EVENT_RECORD);

VOID ResizeEventProc(WINDOW_BUFFER_SIZE_RECORD);

#endif // ARROW_FUNCTION_H
