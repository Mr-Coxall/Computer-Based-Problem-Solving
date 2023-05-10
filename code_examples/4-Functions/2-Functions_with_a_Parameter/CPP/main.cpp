// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area of circle

#include <iostream>
#include <cmath>


void calculateArea(int radius) {
    // this function calculates the area of circle

    // process
    int area = area = M_PI * radius * pow(radius, 2);

    // output
    std::cout << "The area is " << area << " cm²\n";
}

int main() {
    int radius;
    
    // input
    std::cout << "Enter the radius of a circle (cm): ";
    std::cin >> radius;
    std::cout << std::endl;

    // call functions
    calculateArea(radius);

    std::cout << "\nDone." << std::endl;
    return 0;
}
