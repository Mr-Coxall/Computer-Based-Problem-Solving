// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates factorial

#include <stdio.h>

int factorial(int number) {
    // recursive function calculating factorial
    if (number == 1) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    // this function gets user input
    int userInputInt;

    // input
    printf("Enter a positive integer: ");
    scanf("%d", &userInputInt);

    if (userInputInt < 0) {
        printf("That was not a positive integer.\n");
    } else {
        // call function
        int factorialAnswer = factorial(userInputInt);
        printf("The factorial of %d is %d\n", userInputInt, factorialAnswer);
    }

    printf("\nDone.\n");
    return 0;
}
