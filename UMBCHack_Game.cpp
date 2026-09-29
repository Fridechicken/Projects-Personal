#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <string_view>
using namespace std;
int level1(string password){
    bool run = true;
    while(run != false){
        cout << "The King himself is adressing you. Listen to his words\n";
        cout << "King: Welcome to the knights trails\n";
        cout << "King: To become a knight you must pass my trails\n";
        cout << "King: My first trial is to enter create a valid password\n";
        cout << "if you wish to quit at any time just type 'quit'\n";
        cout << "King: Please come up with a password that is 12 characters long, has at least one special character(!@#$%&*), and has at least one number: ";
        cin >> password;
        if (password == "quit") {
            cout << "Goodbye";
            break;
        } else {
            if (password.length()>12){
                if (password.find("!@#$%&*")) {
                    if (password.find("0123456789")){
                        cout<<"You have passed the first trial!\n";
                        run == false;    
                    } else {
                        cout<<"Your password is 12 characters long, has special characters but does not have numbers\n";
                    }
                } else {
                    cout<<"Your password has 12 letters but no special characters. Please try again\n";
                }
            } else if (password.length()<12) {
                cout<<"Please enter a password that is 12 characters long\n";
            } else {
                cout<<"Please enter a string\n";
            }
        }
        return 0;
    }
}
int level2(string guess){
    bool run = true;
    while (run != false) {
        cout << "King: Congrats on passing the first trial!\n";
        cout << "King: The next trial is email checking\n";
        cout << "King: I will give you some examples of good and bad parts of emails and you must say 'G' or 'B' if they are good or bad\n";
        cout << "King: A real email will look something like this: JohnDoe@gmail.com. or maybe have numbers like: Jane123Doe@gmail.com\n";
        cout << "King: but bad emails will look like this: return_ueicjol@distandon.jp.net. or this: vagvdbx@3928221.google.pavexedge.biz\n";
        cout << "King: notice how the bad emails are random letters and numbers. Never click on anything or even acknowledge these emails\n";
        cout << "King: Now it is your turn to tell which emails are good or bad!\n";
        cout << "King: the first is: Jimmy45John@gmail.com\n";
        cout << "Type 'G' for a good email or 'B' for a bad one: ";
        cin >> guess;
        if (guess == "G") {
            cout << "Correct! That was a good email!\n";
            cout << "The next email is: uzxrpxo@3928221.google.korvexatrust.biz\n";
            cout << "Type 'G' for a good email or 'B' for a bad one: ";
            cin >> guess;
            if (guess == "B") {
                cout << "Correct! That was a bad email!\n";
                cout << "The next email is: 11684511300631@questionprov581511.com\n";
                cout << "Type 'G' for a good email or 'B' for a bad one: ";
                cin >> guess;
                if (guess == "B") {
                    cout << "Correct! That was a bad email!\n";
                    cout << "The final email is: mikemathews@yahoo.com\n";
                    cout << "Type 'G' for a good email or 'B' for a bad one: ";
                    cin >> guess;
                    if (guess == "G"){
                        cout << "Correct! That was a good email!\n";
                        cout << "Congrats on getting them all correct!\n";
                        cout << "You passed the second trial!\n";
                    }
                }
            }
        }
    }
    
 return 0;
}
int main(){
    string play_game;
    while (play_game != "N") {
        cout << "Would you like to play the game? Y or N: ";
        cin >> play_game;
        if (play_game == "Y") {
            string password;
            level1(password);
            string guess;
            level2(guess);
        } else if (play_game == "N") {
            cout << "Goodbye! ";
            break;
        } else {
            cout << "Please enter a valid option\n";
        }
    }
}
