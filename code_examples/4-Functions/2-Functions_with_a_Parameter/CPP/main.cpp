// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses user defined functions

#include <iostream>


void calculateArea(int length, int width) {
    // this function calculates the area

    // process
    int area = length * width;

    // output
    std::cout << "The area is " << area << " cm²\n";
}

void calculatePerimeter(int length, int width) {
    // this function calculates the perimeter

    // process
    int perimeter = 2 * (length + width);

    // output
    std::cout << "The perimeter is " << perimeter << " cm\n";
}

int main() {
    // input
    std::cout << "Enter the length of a rectangle (cm): ";
    int length;
    std::cin >> length;
    std::cout << "Enter the width of a rectangle (cm): ";
    int width;
    std::cin >> width;
    std::cout << std::endl;

    // call functions
    calculateArea(length, width);
    calculatePerimeter(length, width);

    std::cout << "\nDone." << std::endl;
    return 0;
}
