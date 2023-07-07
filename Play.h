//
// Created by Ken Howard on 3/8/23.
//

#ifndef PROGRAM4_SPRING2023_PLAY_H
#define PROGRAM4_SPRING2023_PLAY_H
#include <string>
#include <iostream>
#include "Play.h"
#include <ctime>
#include <vector>
#include <random>
#include <iomanip>
//inline functions not specified to use here so I didn't, but I did in the class where it is
using namespace std;

class Play {
public:
    Play();
    //inline setters and getters
    string getPlayType(){return playType;}
    void setPlayType(string playType){this->playType = playType;}
    int getYardsMoved(){return yardsMoved;}
    void setYardsMoved(int yardsMoved){this->yardsMoved = yardsMoved;}
    void start();
    void pass();
    void run();
    void Print();
   //Play class definition with private and public member definitions
private:
    string playType;
    int yardsMoved;
};

#endif //PROGRAM4_SPRING2023_PLAY_H
