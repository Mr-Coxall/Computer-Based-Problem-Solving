// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program is the Fizz Buzz program

#include <stdio.h>

int main() {
    // this function is the Fizz Buzz program
    for (int counter = 1; counter <= 100; counter++) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            printf("Fizz-Buzz\n");
        } else if (counter % 3 == 0) {
            printf("Fizz\n");
        } else if (counter % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", counter);
        }
    }

    printf("\nDone.\n");
    return 0;
}
