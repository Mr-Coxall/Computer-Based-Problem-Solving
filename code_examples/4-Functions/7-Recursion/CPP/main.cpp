// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates factorial

#include <iostream>

int factorial(int number) {
    // recursive function calculating factorial
    if (number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    // this function gets user input
    int userInputInt;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInputInt;

    if (userInputInt < 0) {
        std::cout << "That was not a positive integer." << std::endl;
    } else {
        // call function
        int factorialAnswer = factorial(userInputInt);
        std::cout << "The factorial of " << userInputInt << " is " << factorialAnswer << std::endl;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
