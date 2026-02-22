// Ezzat Mohamadein | CompSC 210 | Lab 11
using namespace std;
#include <iostream>
#include <fstream>

//creates a football (soccer) club struct.
//contains the club name, rank in leaderboard, and a dynamic array with the players' names.
struct Club {
    string clubName;
    int rank;
    string* players[11];
};

int main() {
    //creates a dynamic array of 3 football clubs.
    Club* clubs = new Club[3];
    //initializes the club names, ranks, and players' names for each club.
    clubs[0].clubName = "Real Madrid";
    
    return 0;
}