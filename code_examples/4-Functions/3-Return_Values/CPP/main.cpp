// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area of circle

#include <iostream>
#include <cmath>


float calculateArea(int radius) {
    // this function calculates the area of circle

    // process
    float area = M_PI * radius ** 2;

    return area;
}

int main() {
    int radius = 0;
    float area = 0.0;

    // input
    std::cout << "Enter the radius of a circle (cm): ";
    std::cin >> radius;
    std::cout << std::endl;

    // call functions
    area = calculateArea(radius);

    // output
    std::cout << "The area is " << area << " cm²\n";

    std::cout << "\nDone." << std::endl;
    return 0;
}
