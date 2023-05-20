// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <iostream>
#include <cstdlib>
#include <ctime>


// in C++, an array is passed by reference by default
// (template is used to find the length of the array)
template<size_t arraySize>
int sumOfNumbers(int (&arrayOfNumbers)[arraySize]) {
    // this function adds up all of the numbers in the array, using a For Each loop

    int total = 0;
    int counter;

    for (int aSingleNumber : arrayOfNumbers) {
        total += aSingleNumber;
    }

    return total;
}

int main() {
    // this function uses an array
    int numberList[10];
    unsigned int seed = time(NULL);

    srand(seed);
    // input
    for (int counter = 0; counter < 10; counter++) {
        numberList[counter] = rand_r(&seed) % 100;
        std::cout << "The random number is: " << numberList[counter]
                  << std::endl;
    }
    std::cout << "" << std::endl;

    // call functions
    int sum = sumOfNumbers(numberList);

    // output
    std::cout << "The sum of all the numbers is: " << sum << std::endl;

    std::cout << "\nDone." << std::endl;
    return 0;
}
