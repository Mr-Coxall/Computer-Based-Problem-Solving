// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks if there is over 30 students

#include <iostream>

int main() {
    // this function checks if there is over 30 students
    const int MAX_STUDENT_NUMBER = 30;
    int numberOfStudents;

    // input
    std::cout << "Enter the number of students: ";
    std::cin >> numberOfStudents;

    // process
    if (numberOfStudents > MAX_STUDENT_NUMBER) {
        // output
        std::cout << "Too many students!\n";
    }

    std::cout << "\nDone." << std::endl;
}
