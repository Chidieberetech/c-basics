//
// Created by Chidi on 12/1/2023.
//
#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
                return -1;
            }
            break;
        default:
            cout << "Invalid operation selected." << endl;
            return -1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

