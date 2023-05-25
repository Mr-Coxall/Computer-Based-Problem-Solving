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
int sumOfNumbers(int **arrayOfNumbers, int rows, int columns) {
    // this function adds up all of the numbers in a 2D array

    int total = 0;

    // loop through 2D array and add all numbers together
    for (int rowCounter = 0; rowCounter < rows; rowCounter++) {
        for (int columnCounter = 0; columnCounter < columns; columnCounter++) {
            total += arrayOfNumbers[rowCounter][columnCounter];
        }
    }

    return total;
}

int main() {
    // this function uses an array
    const int rows = 7;
    const int columns = 5;
    int numberList[7][5];
    int seed = time(NULL);

    // input
    srand(seed);
    // Generate random numbers and populate the 2D array
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            int aRandomNumber = rand() % 9;
            numberList[row][column] = aRandomNumber;
            printf("%d ", aRandomNumber);
        }
        printf("\n");
    }
    printf("\n");

    // call function
    //int lengthOfArray = sizeof(numberList) / sizeof(numberList[0]);
    int sumNumbers = sumOfNumbers(numberList, rows, columns);

    // output
    printf("The sum of all the numbers is: %d\n", sumNumbers);

    printf("\nDone.\n");
    return 0;
}
