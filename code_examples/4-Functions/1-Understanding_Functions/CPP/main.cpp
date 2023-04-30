// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses user defined functions

#include <iostream>

void calculateArea() {
    // input
    std::cout << "Enter the length of a rectangle (cm): ";
    int length;
    std::cin >> length;
    std::cout << "Enter the width of a rectangle (cm): ";
    int width;
    std::cin >> width;

    // process
    int area = length * width;

    // output
    std::cout << "The area is " << area << " cm²\n\n";
}

void calculatePerimeter() {
    // input
    std::cout << "Enter the length of a rectangle (cm): ";
    int length;
    std::cin >> length;
    std::cout << "Enter the width of a rectangle (cm): ";
    int width;
    std::cin >> width;

    // process
    int perimeter = 2 * (length + width);

    // output
    std::cout << "The perimeter is " << perimeter << " cm\n\n";
}

int main() {
    // call functions
    calculateArea();
    calculatePerimeter();

    std::cout << "Done." << std::endl;
    return 0;
}
