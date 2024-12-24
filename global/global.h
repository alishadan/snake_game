#ifndef GLOBAL_H
#define GLOBAL_H
#include <windows.h>
#include <thread>
//output buffer
extern HANDLE hConsole;

//input buffer
extern HANDLE iConsole;
extern HANDLE iConsole1;
extern HANDLE FirstBuffer;
extern HANDLE SecondBuffer;
extern HANDLE BackBuffer;
extern bool BufferSwitch;

extern HANDLE FoodBuffer;
extern HANDLE  Player_Buffer;
extern HANDLE SaveMouseBuffer;
extern HANDLE ScoreBuffer;
extern HANDLE SnakeBuffer;
extern HANDLE ScreenBuffer;
//extern HANDLE

void swapBuffers(void);

COORD GetConsoleCursorPosition(HANDLE);




#endif // GLOBAL_H
