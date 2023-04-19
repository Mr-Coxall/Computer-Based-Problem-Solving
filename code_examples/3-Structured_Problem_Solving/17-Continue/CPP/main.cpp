// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a for loop

#include <iostream>

int main() {
    // this function uses a for loop
    int positiveInteger;

    // input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> positiveInteger;
    std::cout << std::endl;

    // process & output
    while (positiveInteger >= 0) {
        // yes, this is the exception on placing the counter at the top
        // if you did not, then there would be an infinit loop

        positiveInteger--;
        if (positiveInteger + 1 == 5) {
            continue;
        }
        std::cout << " Current variable value: " << positiveInteger + 1 << std::endl;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
