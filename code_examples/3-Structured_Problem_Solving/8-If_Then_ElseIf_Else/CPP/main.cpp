// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks if ther is over 30 students

#include <iostream>

int main() {
    // this function checks if ther is over 30 students
    const int MAX_STUDENT_NUMBER = 30;
    int numberOfStudents;

    // input
    std::cout << "Enter the number of students: ";
    std::cin >> numberOfStudents;

    // process and output
    if (numberOfStudents > MAX_STUDENT_NUMBER) {
        std::cout << "Too many students!\n";
    } else {
        std::cout << "Not too many students.\n";
    }

    std::cout << "\nDone." << std::endl;
}
