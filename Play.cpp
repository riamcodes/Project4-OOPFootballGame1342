//Ria Mukherji
//Lab 4
//Ken Howard
#include "Play.h"


Play::Play() {
    //constructor:
    //Seed random
    //initialize yardsMoved to 0
    srand(time(NULL));
    yardsMoved = 0;
  }

//getter function if no inline but since inline commented out
// string Play:: getPlayType(){
//    return playType;
//}
//setter function
// @param  string playType
//void Play:: setPlayType(string playType) {
//  this->playType = playType;
//}
//getter function
//int Play ::getYardsMoved() {
//  return yardsMoved;
//}
//setter function without inline
//@param yardsMoved
//void Play ::setYardsMoved(int yardsMoved) {
//    this->yardsMoved = yardsMoved;
//}


/*
     * Prompt user for (P)ass or (R)un play
     * Set playType to "Pass" or "Run"
     * if "Pass", call Pass function
     * if "Run", call Run function
     *
     */
void Play::start() {
    cout << "  Run or Pass(R/P)?";
    char choice;
    cin >> choice;
    //ignoreCase
    if ((choice == 'R')|| (choice == 'r')) {
        setPlayType("Run");
        run();
    }
    else if (choice == 'P' || choice == 'p') {
        setPlayType("Pass");
        pass();
    }
    //filter input by user
    else {
        cout << "  Bad input: enter R/P " << endl;
    }

}

// set yardsMoved to random value from the list in the instructions
void Play::run() {
vector <int> possibleRunValues = {-5,-3,-1,1,2,4,5,6,8,9};
int randRunVal = possibleRunValues.at(rand() % 10);
setYardsMoved(randRunVal);
}
//set yardsMoved to random value from the list in the instructions
void Play::pass() {
vector <int> possiblePassValues = {-10,-5,0,0,5,10,15,20,25,30};
int randPassVal = possiblePassValues.at(rand() % 10);
setYardsMoved(randPassVal);
}

//Print playType and yardsMoved
void Play::Print() {
    cout << playType << " play for " <<  yardsMoved << " yards" << endl;
}
