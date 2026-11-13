// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : November 12, 2026
// This program allows the user to enter a whole number.
// It then uses a do..while loop to calculate
// the factorial of that number.

#include <iostream>
using namespace std;

int main() {
    // factorial and counter variables
    int num;
    int factorial = 1;
    int counter = 1;
    double input;

    // ask user to enter a whole number
    do {
        cout << "Enter a whole number: ";
        cin >> input;

        // check if number entered is negative
        if (input < 0) {
            cout << "Invalid entry. Enter a positive whole number." << endl;
        }

        // check if number is a decimal
        else if (input != (int)input) {
            cout << "Invalid entry. Please enter a whole number." << endl;
        }

        if (cin.fail()) {
            cout << "User input isn’t a valid input. Try again." << endl;
        }

    } while (input < 0 || input != (int)input);

    num = (int)input;

    // calculate factorial
    do {
        factorial = factorial * counter;
        counter = counter + 1;

    } while (counter <= num);

    // display calculated factorial
    cout << "The factorial is: " << factorial << endl;
}
