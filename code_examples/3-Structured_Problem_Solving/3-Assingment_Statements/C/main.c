// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows assingment statements

#include <iostream>

int main() {
    // variable definition
    int numberOfStudents = 2;
    float width = 32.5F;
    float length = 10.0F;
    float areaOfRectangle = 0;
    std::string someWords1 = "Hello";
    std::string someWords2 = "Wordl!";
    std::string helloWorld = "";

    // using assignment statements
    numberOfStudents = numberOfStudents + 5;
    areaOfRectangle = length * width;
    helloWorld = someWords1 + ", " + someWords2;

    // output
    std::cout << "The number of students is: " << numberOfStudents << std::endl;
    std::cout << "The area of a rectangle is: " << areaOfRectangle
              << " cm²" << std::endl;
    std::cout << helloWorld << std::endl;

    std::cout << "\nDone." << std::endl;
}
