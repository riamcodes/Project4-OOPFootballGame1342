//Ria Mukherji
//Lab 4
//Ken Howard
#include "Team.h"

//Team constructor:
// initialize name to string passed in
Team::Team(string teamName) {
    setName(teamName);
    score = 0;
}

//called at end of game optionally to replay a summary of all Plays
void Team::replay() {
    for(int i = 0; i < plays.size(); i++){
        plays.at(i).Print();
    }
}

//game logic for turns in the game described in function
//game logic for turns in the game described in function
void Team::takeTurn() {
    int location = 20;
    int downCounter = 1;
    int target = location + 10;
    while(true){
       // cout << setfill(' ') << setw(2) << right <<  The spacing didn't work ask about in class
        cout << "  Ball at: " << location << ".     Down #" << downCounter << endl;
        //create new play and add to vector
        Play newPlay;
        newPlay.start();
        //When the Play ends, get its yardsMoved value
        int yardsMoved = newPlay.getYardsMoved();
        newPlay.setYardsMoved(yardsMoved);
        plays.push_back(newPlay);
        //target to move 10 yards

        //add yardsMoved to the location
        location += yardsMoved;
        // Print "Moved n yards", "Moved back n yards" or "no yards" depending on what happens
        if (yardsMoved == 0){
            cout << "  No yards" << endl;
        }
        else if (yardsMoved > 0) {
            cout << "  Moved " << yardsMoved << " yards" << endl;
        }
        else if (yardsMoved < 0){
            cout << "  Moved back " << (-1 * yardsMoved) << " yards" << endl;
        }

        //If location >= 100, declare touchdown and add 6 points to the team's score
        if (location >= 100){
            cout << "  Touchdown! " << endl;
            score += 6;
            break;
        }
        //Otherwise, if location < target, increment down counter. If down counter > 4, end the turn
        // If location >= target, set target = location + 10
       else if(location < target){
           downCounter++;
           if (downCounter > 4){
               cout << "  Turn over" << endl;
               break;
           }
       }
      else if (location >= target){
          target = location + 10;
          downCounter = 1;
      }
      cout << "  " << (target - location)  << " yards to 1st down" << endl;
    }
}

