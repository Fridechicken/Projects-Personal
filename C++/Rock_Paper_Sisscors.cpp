#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    string playGame;
    while (playGame != "no") {
        cout << "Would you like to play? Enter 'yes' or 'no'.";
        cin >> playGame;
        if (playGame == "yes") {
            int gameSettings;
        cout << "Enter 1 to play against the computer or 2 to play two player: ";
        cin >> gameSettings;
        if (gameSettings == 1) {
            int randomNum = rand() % 3;
            string input1;
            cout << "Player 1, please enter rock, paper, or scissor: ";
            cin >> input1;
            if ((input1 == "rock" && randomNum == 1) || (input1 == "paper" && randomNum == 2) || (input1 == "scissor" && randomNum == 0)) {
                cout << "It's a tie!";
            } else if (input1 == "rock" && randomNum == 0) {
                cout << "rock beats scissors, player 1 wins";
            } else if (input1 == "paper" && randomNum == 1) {
                cout << "paper beats rock, player 1 wins";
            } else if (input1 == "scissor" && randomNum == 2) {
                cout << "scissor beats paper, player 1 wins";
            } else if (input1 == "rock" && randomNum == 2) {
                cout << "paper beats rock, the computer wins";
            } else if (input1 == "scissor" && randomNum == 1) {
                cout << "rock beats scissors, the computer wins";
            } else if (input1 == "paper" && randomNum == 0) {
                cout << "scissor beats paper, the computer wins";
            } else {
                cout << "Please enter a valid option";
            }
            } else if (gameSettings == 2) {
                string input1;
                cout << "Player 1, please enter rock, paper, or scissor: ";
                cin >> input1;
                string input2;
                cout << "Player 2, please enter rock, paper, or scissor: ";
                cin >> input2;    
            if (input1 == input2) {
                cout << "It's a tie";
            } else if (input1 == "rock" && input2 == "scissor") {
                cout << "rock beats scissors, player 1 wins";
            } else if (input1 == "paper" && input2 == "rock") {
                cout << "paper beats rock, player 1 wins";
            } else if (input1 == "scissor" && input2 == "paper") {
                cout << "scissor beats paper, player 1 wins";
            } else if (input1 == "rock" && input2 == "paper") {
                cout << "paper beats rock, player 2 wins";
            } else if (input1 == "scissor" && input2 == "rock") {
                cout << "rock beats scissors, player 2 wins";
            } else if (input1 == "paper" && input2 == "scissor") {
                cout << "scissor beats paper, player 2 wins";
            } else {
                cout << "Please enter a valid option";
            }
            } else {
                cout << "Please enter a valid option";
            }
        } else if (playGame == "no") {
            cout << "Goodbye!";
            break;
        } else {
            cout << "Please enter a valid input";
        }
    return 0;
    }
}