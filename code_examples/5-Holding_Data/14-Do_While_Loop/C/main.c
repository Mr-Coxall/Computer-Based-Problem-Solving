// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a do ... while loop

#include <stdio.h>

int main() {
    // this function uses a do ... while loop
    int counter = 0;
    int positiveInteger;

    // input
    printf("Enter how many times to repeat: ");
    scanf("%d", &positiveInteger);
    printf("\n");

    // process & output
    do {
        printf("%d time(s) through the loop.\n", counter);
        counter = counter + 1;
    } while (counter < positiveInteger);

    printf("\nDone.\n");
    return 0;
}
