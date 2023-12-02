// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <iostream>
#include <cstdlib>
#include <ctime>

// In C++, an array is passed by reference to a function
// (template is used to find the length and width of the 2D array)
template<int arrayLength, int arrayWidth>
int sumOfNumbers(int (&arrayOfNumbers)[arrayLength][arrayWidth]) {
    // this function adds up all of the numbers in the 2D array

    int total = 0;
    int counter;
    
    for (counter = 0; counter < arrayLength; counter++) {
        for (int counter2 = 0; counter2 < arrayWidth; counter2++) {
            total += arrayOfNumbers[counter][counter2];
        }
    }

    return total;
}

int main() {
    // this function uses an array
    // remember in C you must know the array size at compile time
    const int arrayLength = 10;
    const int arrayWidth = 5;
    int numberList[arrayLength][arrayWidth];
    unsigned int seed = time(NULL);

    srand(seed);
    // input
    for (int counter1 = 0; counter1 < arrayLength; counter1++) {
        for (int counter2 = 0; counter2 < arrayWidth; counter2++) {
            numberList[counter1][counter2] = rand_r(&seed) % 100;
            std::cout << numberList[counter1][counter2] << " ";
        }
        std::cout << "" << std::endl;
    }
    std::cout << "" << std::endl;

    // call functions
    int sum = sumOfNumbers(numberList);

    // output
    std::cout << "The sum of all the numbers is: " << sum << std::endl;

    std::cout << "\nDone." << std::endl;
    return 0;
}
