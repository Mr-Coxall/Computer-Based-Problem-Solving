// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses user defined functions

#include <iostream>


int calculateArea(int length, int width) {
    // this function calculates the area

    // process
    int area = length * width;

    return area;
}

void calculatePerimeter(int length, int width) {
    // this function calculates the perimeter

    // process
    int perimeter = 2 * (length + width);

    return perimeter;
}

int main() {
    // this function does the input and output
    int area = 0;
    int perimeter = 0;

    // input
    std::cout << "Enter the length of a rectangle (cm): ";
    int length;
    std::cin >> length;
    std::cout << "Enter the width of a rectangle (cm): ";
    int width;
    std::cin >> width;
    std::cout << std::endl;

    // call functions
    area = calculateArea(length, width);
    perimeter = calculatePerimeter(length, width);

    // output
    std::cout << "The area is " << area << " cm²\n";
    std::cout << "The perimeter is " << perimeter << " cm\n";

    std::cout << "\nDone." << std::endl;
    return 0;
}
