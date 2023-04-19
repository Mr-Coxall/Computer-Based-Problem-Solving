// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a for loop

#include <stdio.h>

int main() {
    // this function uses a for loop
    int positiveInteger;

    // input
    printf("Enter how many times to repeat: ");
    scanf("%d", &positiveInteger);
    printf("\n");

    // process & output
    while (positiveInteger >= 0) {
        // yes, this is the exception on placing the counter at the top
        // if you did not, then there would be an infinit loop

        positiveInteger--;
        if (positiveInteger == 5) {
            continue;
        }
        printf("Current variable value: %d\n", positiveInteger + 1);
    }

    printf("\nDone.\n");
    return 0;
}
