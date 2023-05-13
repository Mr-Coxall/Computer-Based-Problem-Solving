// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a function by reference

#include <iostream>

void addOne(int &someNumber) {
    // this function adds one, by reference
    someNumber = someNumber + 1;
}

int main() {
    // this function uses a function by reference
    int someNumber;

    // input
    std::cout << "Enter a number: ";
    std::cin >> someNumber;

    // process
    addOne(someNumber);

    // output
    std::cout << "The number plus one is: " << someNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
