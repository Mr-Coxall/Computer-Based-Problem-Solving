// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses user defined functions

#include <stdio.h>

void calculateArea(int length, int width) {
    // this function calculates the area

    // process
    int area = length * width;

    // output
    printf("The area is %d cm²\n", area);
}

void calculatePerimeter(int length, int width) {
    // this function calculates the perimeter
    
    // process
    int perimeter = 2 * (length + width);

    // output
    printf("The perimeter is %d cm\n", perimeter);
}

int main() {
    // input
    printf("Enter the length of a rectangle (cm): ");
    int length;
    scanf("%d", &length);
    printf("Enter the width of a rectangle (cm): ");
    int width;
    scanf("%d", &width);
    printf("\n");

    // call functions
    calculateArea(length, width);
    calculatePerimeter(length, width);

    printf("\nDone.\n");
    return 0;
}
