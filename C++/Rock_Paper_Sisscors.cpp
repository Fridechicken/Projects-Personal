#include <iostream>
#include <string>
using namespace std;
int main(){
    int gamesettings;
    cout << "Enter 1 to play against the computer or 2 to play two player: ";
    cin >> gamesettings;
    if (gamesettings == 1) {
        cout << "Still figuring out a set and random in c++. Please hold";
    } else if (gamesettings == 2) {
        string input1;
        cout << "Player 1, please enter rock, paper, or scissor: ";
        cin >> input1;
        string input2;
        cout << "Player 2, please enter rock, paper, or scissor: ";
        cin >> input2;    
        cout << "Player 1 picked: " << input1 << "\n";
        cout << "Player 2 picked: " << input2;
        if (input1 == "rock" && input2 == "scissor") {
            cout << "Rock beats scissors, player 1 wins";
        }
    } else {
        cout << "Please enter a valid option";
    }
    return 0;
}
