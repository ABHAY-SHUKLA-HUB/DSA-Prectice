// Check whether a number is divisible by 3 or 7, but not both.

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if ((num % 3 == 0) && (num % 7 == 0)) {
        cout << "Divisible by both 3 and 7" << endl;
    }
    else if (num % 3 == 0) {
        cout << "Divisible by 3 only" << endl;
    }
    else if (num % 7 == 0) {
        cout << "Divisible by 7 only" << endl;
    }
    else {
        cout << "Not divisible by 3 or 7" << endl;
    }

    return 0;
}
