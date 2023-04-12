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
    for (int loopCounter = 0; loopCounter < positiveInteger; loopCounter++) {
        std::cout << loopCounter <<" time through loop." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
