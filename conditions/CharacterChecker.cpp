#include <iostream>
#include <cctype>   // for isupper, islower, isdigit
using namespace std;

int main() {
    char ch;
    cout<<"one characte: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << "Uppercase" << endl;
    }
    else if (islower(ch)) {
        cout << "Lowercase" << endl;
    }
    else if (isdigit(ch)) {
        cout << "Digit" << endl;
    }
    else {
        cout << "Special Character" << endl;
    }

    return 0;
}


//  other option
// if(ch >= 'A' && ch <= 'Z')
//     cout << "Uppercase";
// else if(ch >= 'a' && ch <= 'z')
//     cout << "Lowercase";
// else if(ch >= '0' && ch <= '9')
//     cout << "Digit";
// else
    // cout << "Special Character";    

    