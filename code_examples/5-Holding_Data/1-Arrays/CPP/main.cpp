// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array

#include <iostream>


int main() {
    // this function uses an array

    int studentMarks[5];
    int aSingleMark;

    // get length of array
    int arrayLength = sizeof(studentMarks) / sizeof(studentMarks[0]);

    // input
    for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
        std::cout << "Enter a mark (percentage): ";
        std::cin >> aSingleMark;
        studentMarks[loop_counter] = aSingleMark;
    }
    std::cout << std::endl;
    std::cout << "Here are the 5 marks:" << std::endl;

    for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
        std::cout << studentMarks[loop_counter] << "% ";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
    return 0;
}
