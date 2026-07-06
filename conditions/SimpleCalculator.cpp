#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char op;

    cin >> number1 >> op >> number2;
    if (op == '+') {
        cout << number1 + number2 << endl;
    }
    else if (op == '-') {
        cout << number1 - number2 << endl;
    }
    else if (op == '*') {
        cout << number1 * number2 << endl;
    }
    else if (op == '/') {
        if (number2 != 0)
            cout << number1 / number2 << endl;
        else
            cout << "Error: Division by zero" << endl;
    }
    else {
        cout << "Invalid Operator" << endl;
    }
    return 0;
}
