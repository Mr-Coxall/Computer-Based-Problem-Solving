// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a nested if statement

#include <stdio.h>

int main() {
    // this function uses a nested if statement
    int cookiesSold;

    // input
    printf("Enter the number of boxes of cookies you sold: ");
    scanf("%d", &cookiesSold);
    printf("\n");

    // process & output
    if (cookiesSold >= 20) {
        if (cookiesSold < 30) {
            printf("You get a small prize.\n");
        } else {
            printf("You get a large prize.\n");
        }
    } else {
        printf("No prize.\n");
    }

    printf("\nDone.\n");
    return 0;
}
