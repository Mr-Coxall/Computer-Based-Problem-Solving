// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a compound boolean statement

#include <iostream>

int main() {
    // this function uses a compound boolean statement
    int termMark;
    int projectMark;

    // input
    std::cout << "Enter term mark (as %): ";
    std::cin >> termMark;
    std::cout << "Enter project mark (as %): ";
    std::cin >> projectMark;
    std::cout << std::endl;

    // process & output
    if (termMark >= 50 && projectMark >= 50) {
        std::cout << "You passed the course." << std::endl;
    } else {
        std::cout << "You did not pass the course." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
