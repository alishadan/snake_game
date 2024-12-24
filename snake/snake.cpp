#include "snake.h"
#include "../global/global.h"
#include "../clear_screen/clear.h"


 //HANDLE hConsole;
void snake::draw(void){

    DWORD written = 0;
    const char *message = "*";

     for(COORD &i : pos_snake){
            SetConsoleCursorPosition(hConsole, i);
            WriteConsoleA(hConsole, message, strlen(message), &written, NULL);
     }
     SetConsoleCursorPosition(hConsole, pos_snake[2]);
     WriteConsoleA(hConsole, message, strlen(message), &written, NULL);

}
