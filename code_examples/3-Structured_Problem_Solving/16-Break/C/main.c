// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a break statement

#include <stdio.h>

int main() {
    // this function uses a break statement
    int positiveInteger;

    // input
    printf("Enter how many times to repeat: ");
    scanf("%d", &positiveInteger);
    printf("\n");

    // process & output
    for (int loopCounter = 0; loopCounter < positiveInteger; loopCounter++) {
        printf("%d time(s) through the loop.\n", loopCounter);
        if (loopCounter >= 5) {
            break;
        }
    }

    printf("\nDone.\n");
    return 0;
}
