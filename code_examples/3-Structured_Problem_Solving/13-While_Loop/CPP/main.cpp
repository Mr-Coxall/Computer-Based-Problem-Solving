// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a while loop

#include <iostream>

int main() {
    // this function uses a while loop
    int counter = 0;
    int positiveInteger;

    // input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> positiveInteger;
    std::cout << std::endl;

    // process & output
    while (counter < positiveInteger) {
        std::cout << counter << " time(s) through the loop." << std::endl;
        counter = counter + 1;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
