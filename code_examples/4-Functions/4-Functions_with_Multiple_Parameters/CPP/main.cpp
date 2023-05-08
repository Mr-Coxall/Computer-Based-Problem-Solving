// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area of a rectangle

#include <iostream>


int calculateArea(int length, int width) {
    // this function calculates the area of a rectangle

    // process
    int area = length * width;

    return area;
}

int main() {
    // this function does the input and output
    int area = 0;
    int perimeter = 0;

    // input
    std::cout << "Enter the length of a rectangle (cm): ";
    int lengthFromUser;
    std::cin >> lengthFromUser;
    std::cout << "Enter the width of a rectangle (cm): ";
    int widthFromUser;
    std::cin >> widthFromUser;
    std::cout << std::endl;

    // call functions
    area = calculateArea(lengthFromUser, widthFromUser);

    // output
    std::cout << "The area is " << area << " cm²\n";

    std::cout << "\nDone." << std::endl;
    return 0;
}
