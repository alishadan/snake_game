#include "savefile.h"
void savefile(score nomre, player bazikon){
      // Create and open a text file
  ofstream MyFile("D:\\snakedata.text");

    // Write to the file
    //MyFile<<"_"<<endl;
  MyFile << "name of player: "<< bazikon.name <<endl;
  MyFile << "score: "<< nomre.nomre << endl;

  // Close the file
  MyFile.close();




}
