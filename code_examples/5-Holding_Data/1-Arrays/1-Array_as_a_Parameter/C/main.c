// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// in C an array is passed by reference to a function
//   (C can not know the size of the array, so you need to pass it in as well)
int sumOfNumbers(int *arrayOfNumbers, int lengthOfArray) {
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
    int lengthOfArray = sizeof(numberList) / sizeof(numberList[0]);
    int sum = sumOfNumbers(numberList, lengthOfArray);

    // output
    printf("The sum of all the numbers is: %d\n", sum);

    printf("\nDone.\n");
    return 0;
}
