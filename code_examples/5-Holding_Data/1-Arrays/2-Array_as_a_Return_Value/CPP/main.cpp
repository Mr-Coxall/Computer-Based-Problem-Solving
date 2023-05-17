// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <iostream>
#include <cstdlib>
#include <ctime>


// in C++, an array is passed by reference by default
int sumOfNumbers(int arrayOfNumbers[]) {
    // this function adds up all of the numbers in the list

    int total = 0;
    int counter;
    int lengthOfArray = sizeof(arrayOfNumbers)/sizeof(arrayOfNumbers[0]);

    for (counter = 0; counter < lengthOfArray; counter++) {
        total += arrayOfNumbers[counter];
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
