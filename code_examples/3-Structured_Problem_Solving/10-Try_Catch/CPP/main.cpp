// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks for a runtime error

#include <iostream>
#include <string>

int main() {
    // this function checks for a runtime error
    std::string integerAsString;

    // Input
    std::cout << "Enter an integer: ";
    getline(std::cin, integerAsString);

    // Process & Output
    try {
        int integerAsNumber = stoi(integerAsString);
        std::cout << "You entered: " << integerAsNumber << "." << std::endl;
    }
    catch (const std::invalid_argument &err)
    {
        std::cout << "The error was: " << err.what() << "." << std::endl;
    }
    std::cout << "Thanks for playing." << std::endl;

    std::cout << "\nDone." << std::endl;
}
