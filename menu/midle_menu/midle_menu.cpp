#include "midle_menu.h"
#include "../menu.h"
#include "../../global/global.h"
#include <iostream>
using namespace std;
void midle_menu(void){
    COORD coord={0,0};
    SetConsoleCursorPosition(hConsole,coord);
    cout<< "#################"<<endl;
    cout <<"#         continue         #"<<endl;
    cout<<"________________________"<<endl;
    cout<<"#           sound             #"<<endl;
    cout<<"_________________________"<<endl;
    cout<<"#            records           #"<<endl;
    cout<<"_________________________"<<endl;
    cout<<"#            players            #"<<endl;
    cout<<"_________________________"<<endl;
    cout<<"#           about                #"<<endl;
    cout<<"__________________________"<<endl;
    cout<<"#            about                #"<<endl;
    cout<<"__________________________"<<endl;
    cout<<"#            exit                    #"<<endl;
    cout<< "###################"<<endl;

}
