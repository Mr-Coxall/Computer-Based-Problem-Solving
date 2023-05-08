// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area of a rectangle

#include <stdio.h>

int calculateArea(int length, int width) {
    // this function calculates the area of a rectangle

    // process
    int area = length * width;

    return area;
}

int main() {
    // this function does the input and output
    int area = 0;

    // input
    printf("Enter the length of a rectangle (cm): ");
    int lengthFromUser;
    scanf("%d", &lengthFromUser);
    printf("Enter the width of a rectangle (cm): ");
    int widthFromUser;
    scanf("%d", &widthFromUser);
    printf("\n");

    // call functions
    area = calculateArea(lengthFromUser, widthFromUser);

    // output
    printf("The area is %d cm²\n", area);

    printf("\nDone.\n");
    return 0;
}
