// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks your grade

#include <iostream>

int main() {
    // this function checks your grade
    char gradeLevel;  // a single character

    // input
    std::cout << "Enter grade mark as a single character(ex: A, B, ...): ";
    std::cin >> gradeLevel;

    // process and output
    // switch in C++ can not support strings, only numbers and char
    // also note you need the break in C++ or it will move to next
    // line in switch statement if it is true again
    switch (gradeLevel) {
    case 'A':
        std::cout << "Excellent!" << std::endl;
        break;
    case 'B':
        std::cout << "Good job!" << std::endl;
        break;
    case 'C':
        std::cout << "Average." << std::endl;
        break;
    case 'D':
        std::cout << "Poor." << std::endl;
        break;
    case 'F':
        std::cout << "Fail." << std::endl;
        break;
    default:
        std::cout << "Invalid grade." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
