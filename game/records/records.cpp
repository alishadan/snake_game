#include "records.h"
#include <fstream>
#include <iostream>
#include <string>
#include "../../menu/end_menu/draw_end_menu/draw_end_menu.h"
#include "../../menu/end_menu/end_menu.h"

#include "../../scorce/score.h"
#include "../../player/player.h"
#include "../../menu/end_menu/end_menu.h"
using namespace std;
void records_snake(void){
    system("cls");
     ifstream snake_file("D:\\snakedata.text");
    // Check if the file is successfully opened
    if (!snake_file.is_open()) {
        cerr << "Error opening the file!";

    }

    string all_string;
    while(getline(snake_file,all_string)){
             cout<<all_string<<endl;

    }
    cout<< "status of records"<<endl;
    cout<<"\n\n\n\n"<<endl;

    draw_end_menu();
    //end_menu();

    system("pause");
    score nomreh; player bazikon;

    end_menu( nomreh, bazikon);



    // loading file contains of records of players

}
