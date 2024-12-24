#include "food.h"
#include "../global/global.h"


 //HANDLE hConsole;
void food::draw(void){
        DWORD written = 0;
        const char *message = "O";

        if (hConsole==INVALID_HANDLE_VALUE){
        MessageBox(NULL, TEXT("GetStdHandle"), TEXT("Console Error"),
        MB_OK);
    }

    SetConsoleCursorPosition(hConsole, this->coord);
     WriteConsoleA(FoodBuffer, message, strlen(message), &written, NULL);

}
void food::change_coord_food(void){
    this->coord={random(),random()};
}
