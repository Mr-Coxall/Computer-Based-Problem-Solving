// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses user defined functions

#include <stdio.h>

int calculateArea(int length, int width) {
    // this function calculates the area

    // process
    int area = length * width;

    return area;
}

int calculatePerimeter(int length, int width) {
    // this function calculates the perimeter
    
    // process
    int perimeter = 2 * (length + width);

    return perimeter;
}

int main() {
    // this function does the input and output
    int area = 0;
    int perimeter = 0;

    // input
    printf("Enter the length of a rectangle (cm): ");
    int length;
    scanf("%d", &length);
    printf("Enter the width of a rectangle (cm): ");
    int width;
    scanf("%d", &width);
    printf("\n");

    // call functions
    area = calculateArea(length, width);
    perimeter = calculatePerimeter(length, width);

    // output
    printf("The area is %d cm²\n", area);
    printf("The perimeter is %d cm\n", perimeter);

    printf("\nDone.\n");
    return 0;
}
