// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array as a parameter

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// in C you must pass in the size of the 2D array to a function, first
int sumOfNumbers(int lengthOfArray, int widthOfArray, int arrayOfNumbers[lengthOfArray][widthOfArray]) {
    // this function adds up all of the numbers in the list

    int total = 0;
    int counterLength;
    int counterWidth;

    for (counterLength = 0; counterLength < lengthOfArray; counterLength++) {
        for (counterWidth = 0; counterWidth < widthOfArray; counterWidth++) {
            total += arrayOfNumbers[counterLength][counterWidth];
        }
    }

    return total;
}

int main() {
    // this function uses an array
    // remember in C you must know the array size at compile time
    const int lengthOfArray = 10;
    const int widthOfArray = 5;
    int numberList[lengthOfArray][widthOfArray];
    int seed = time(NULL);

    // input
    srand(seed);
    for (int counter1 = 0; counter1 < lengthOfArray; counter1++) {
        for (int counter2 = 0; counter2 < widthOfArray; counter2++) {
            int aSingleRandomNumber = rand_r(&seed) % 100;
            numberList[counter1][counter2] = aSingleRandomNumber;
            printf("%d ", aSingleRandomNumber);
        }
        printf("\n");
    }
    printf("\n");

    // call function
    int sum = sumOfNumbers(lengthOfArray, widthOfArray, numberList);

    // output
    printf("The sum of all the numbers is: %d\n", sum);

    printf("\nDone.\n");
    return 0;
}
