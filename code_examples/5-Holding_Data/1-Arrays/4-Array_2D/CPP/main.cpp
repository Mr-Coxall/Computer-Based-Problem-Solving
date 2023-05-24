// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <iostream>
#include <cstdlib>
#include <ctime>


// In C++, a 2D array is passed by reference to a function
// (template is used to find the length of the array)
template<size_t rows, size_t cols>
int sumOfNumbers(int (&arrayOf2DNumbers)[rows][cols]) {
    // this function adds up all of the numbers in a 2D array

    int total = 0;
    int counter = 0;
    
    for (int rowCounter : arrayOf2DNumbers) {
        for (int columnCounter : rowCounter) {
            total += columnCounter;
        }
    }

    return total;
}

int main() {
    // this function uses a 2D array
    const int rows = 2;
    const int columns = 5;
    int a2DArray[rows][columns];
    int aSingleRandomNumber = 0;
    int sum = 0;

    srand(time(NULL));

    // input

    // So, ...
    //   In C++ you can't define array's size using variable.
    //   this is why you see const int rows = 2; above,
    //   so the size of the array can never change

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = (rand() % 10) + 1;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    // call functions
    sum = sumOfNumbers(a2DArray);

    // output
    std::cout << "The sum of all the numbers is: " << sum << std::endl;

    std::cout << "\nDone." << std::endl;
    return 0;
}
