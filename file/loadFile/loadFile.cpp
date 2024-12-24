#include "loadFile.h"
#include <fstream>
#include <iostream>
#include <istream>
#include "../../player/player.h"
#include "../../scorce/score.h"
using namespace std;

void loadFile(player &bazikon,score &nomreh){
    ifstream snake_file("D:\\snakedata.text");
    // Check if the file is successfully opened
    if (!snake_file.is_open()) {
        cerr << "Error opening the file!";

    }

    string all_string;
    getline(snake_file,all_string);
    size_t pos=all_string.find("name of player: ");
    bazikon.name = all_string.substr(15);
    cout<<bazikon.name<<endl;



    getline(snake_file,all_string);
    size_t poss=all_string.find("score: ");
    nomreh.nomre= stoi(all_string.substr(6));
    //cout << nomreh.nomre <<endl;

    Sleep(100);

    // Close the file
    snake_file.close();

}


