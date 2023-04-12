// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a nested if statement

#include <iostream>

int main() {
    // this function uses a nested if statement
    int cookiesSold;

    // input
    std::cout << "Enter the number of boxes of cookies you sold: ";
    std::cin >> cookiesSold;
    std::cout << std::endl;

    // process & output
    if (cookiesSold >= 20) {
        if (cookiesSold < 30) {
            std::cout << "You get a small prize." << std::endl;
        } else {
            std::cout << "You get a large prize." << std::endl;
        }
    } else {
        std::cout << "No prize." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
