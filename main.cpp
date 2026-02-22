// Ezzat Mohamadein | CompSC 210 | Lab 11
using namespace std;
#include <iostream>
#include <fstream>

//creates a football (soccer) club struct.
//contains the club name, rank in leaderboard, and a dynamic array with the players' names.
struct Club {
    string clubName;
    int rank;
    string* players;
};

int main() {
    //creates a dynamic array of 3 football clubs.
    Club* clubs = new Club[3];
    //initializes the club names, ranks, and players' names for each club.
    ifstream fin ("input.txt");
    if (fin.good()) {
        clubs[0].clubName = "Real Madrid"; //club 1 (guess who I support).
        clubs[0].rank = 1;
        clubs[0].players = new string[11];
        for (int i = 0; i < 11; i++) {
            getline(fin, clubs[0].players[i]);
        }
        clubs[1].clubName = "Barcelona"; //club 2
        clubs[1].rank = 2;
        clubs[1].players = new string[11];
        for (int i = 0; i < 11; i++) {
            getline(fin, clubs[1].players[i]);
        }
        clubs[2].clubName = "Atletico Madrid"; //club 3
        clubs[2].rank = 3;
        clubs[2].players = new string[11];
        for (int i = 0; i < 11; i++) {
            getline(fin, clubs[2].players[i]);
        }
        fin.close();
        //prints the club names, ranks, and players' names for each club.
        for (int i = 0; i < 3; i++) {
            cout << "Club Name: " << clubs[i].clubName << endl;
            cout << "Rank: " << clubs[i].rank << endl;
            cout << "Players: " << endl;
            for (int j = 0; j < 11; j++) {
                cout << clubs[i].players[j] << " ";
            }
            cout << endl << endl;
        }
        //deletes the dynamic array of clubs and the dynamic arrays of players for each club to free up memory.
        for (int i = 0; i < 3; i++) {
            delete[] clubs[i].players;
        }
        delete[] clubs;
    }
    else {
        cout << "Error opening file." << endl;
    }
    return 0;
}