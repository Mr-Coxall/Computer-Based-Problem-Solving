// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a function by reference

#include <stdio.h>

void addOne(int *someNumber) {
    // this function adds one by reference
    someNumber = someNumber + 1;
}

int main() {
    // this function uses a function by reference
    int someNumber;

    // input
    printf("Enter a number: ");
    scanf("%d", &someNumber);

    // process
    addOne(&someNumber);

    // output
    printf("The number plus one is: %d \n", someNumber);

    printf("\nDone.\n");
    return 0;
}
