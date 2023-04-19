// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a nested loop

#include <stdio.h>

int main() {
    // this function uses a nested loop

    // process & output
    for (int counter1 = 0; counter1 < 10; counter1++) {
        for (int counter2 = 0; counter2 < 10; counter2++) {
            printf("Odometer: %d%d\n", counter1, counter2);
        }
    }

    printf("\nDone.\n");
    return 0;
}
