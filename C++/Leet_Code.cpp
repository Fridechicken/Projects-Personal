#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string roman;
    cout << "Enter roman numerals to convert: ";
    cin >> roman;
    int num = 0;
    for (int i = 0; i < roman.length(); i++) {
        roman[i] = toupper(roman[i]);
        if (roman == "I") {
        num += 1;
        } else if (roman == "V") {
            num += 5;
        } else if (roman == "X") {
            num += 10;
        } else if (roman == "L") {
            num += 50;
        } else if (roman == "C") {
            num += 100;
        } else if (roman == "D") {
            num += 500;
        } else if (roman == "M") {
            num += 1;
        } else if (roman == "X") {

        }
    }
    
    cout << roman << " is " << num;
    return 0;
}
int converter(string roman) {
    int converted;
	int num = 0;
    if (roman == "I") {
        converted += 1;
    }
    else if (roman == "V") {
        converted += 5;
    }
    else if (roman == "X") {
        converted += 10;
    }
    else if (roman == "L") {
        converted += 50;
    }
    else if (roman == "C") {
        converted += 100;
    }
    else if (roman == "D") {
        converted += 500;
    }
    else if (roman == "M") {
        converted += 1000;
    }
    
    return converted;
}