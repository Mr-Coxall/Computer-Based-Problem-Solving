// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// in C an array is passed by reference to a function
int sumOfNumbers(int arrayOfNumbers[]) {
    // this function adds up all of the numbers in the list

    int total = 0;
    int counter;
    int lengthOfArray = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    for (counter = 0; counter < lengthOfArray; counter++) {
        total += arrayOfNumbers[counter];
    }

    return total;
}

int main() {
    // this function uses an array
    int numberList[10];
    int seed = time(NULL);

    // input
    for (int counter = 0; counter < 10; counter++) {
        srand(seed);
        int aSingleRandomNumber = rand_r(&seed) % 100;
        numberList[counter] = aSingleRandomNumber;
        printf("The random number is: %d\n", aSingleRandomNumber);
    }
    printf("\n");

    // call function
    int sum = sumOfNumbers(numberList);

    // output
    printf("The sum of all the numbers is: %d\n", sum);

    printf("\nDone.\n");
    return 0;
}
