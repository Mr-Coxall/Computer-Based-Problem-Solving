// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks for a runtime error

#include <stdio.h>

int main() {
    // this function checks for a runtime error
    int integerValue = 0;
    int scanErrorCode = 0;

    // input
    printf("Enter an integer: ");
    scanErrorCode = scanf("%d", &integerValue);

    // process and output
    if (scanErrorCode == 1) {
        printf("You entered: %d\n", integerValue);
    } else {
        printf("You did not enter an integer.\n");
    }
    printf("Thanks for playing.\n");

        printf("\nDone.\n");
    return 0;
}
