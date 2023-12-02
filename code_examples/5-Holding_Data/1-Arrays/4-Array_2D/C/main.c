// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a 2D array as a parameter

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// in C you must pass in the size of the 2D array to a function, first
int sumOfNumbers(int rows, int columns, int arrayOfNumbers[rows][columns]) {
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
    // this function uses a 2D array
    const int rows = 7;
    const int columns = 5;
    int number2DArray[rows][columns];
    int seed = time(NULL);

    // input
    srand(seed);
    // Generate random numbers and populate the 2D array
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            int aRandomNumber = rand() % 9;
            number2DArray[row][column] = aRandomNumber;
            printf("%d ", aRandomNumber);
        }
        printf("\n");
    }
    printf("\n");

    // call function
    int sumNumbers = sumOfNumbers(rows, columns, number2DArray);

    // output
    printf("The sum of all the numbers is: %d\n", sumNumbers);

    printf("\nDone.\n");
    return 0;
}
