// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// In C an array is passed by reference to a function
//   (C can not know the size of the array, so you need to pass it in as well)
int sumOfNumbers(int lengthOfArray, int arrayOfNumbers[lengthOfArray]) {
    // this function adds up all of the numbers in the array

    int total = 0;
    int counter = 0;

    while (counter < lengthOfArray) {
        total += arrayOfNumbers[counter];
        counter++;
    }

    return total;
}

int main() {
    // this function uses an array
    // remember in C you must know the array size at compile time
    int arraySize = 10;
    int numberList[arraySize];
    int seed = time(NULL);

    // input
    srand(seed);
    for (int counter = 0; counter < arraySize; counter++) {
        int aSingleRandomNumber = rand_r(&seed) % 100;
        numberList[counter] = aSingleRandomNumber;
        printf("The random number is: %d\n", aSingleRandomNumber);
    }
    printf("\n");

    // call function
    int lengthOfArray = sizeof(numberList) / sizeof(numberList[0]);
    int sum = sumOfNumbers(lengthOfArray, numberList);

    // output
    printf("The sum of all the numbers is: %d\n", sum);

    printf("\nDone.\n");
    return 0;
}
