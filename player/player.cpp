#include "player.h"
void player::draw(void){
    SetConsoleCursorPosition(hConsole,this->coord);
     string string1="player name: ";
    //swapBuffers(string1);
    cout <<string1 << this->name << endl;
}
