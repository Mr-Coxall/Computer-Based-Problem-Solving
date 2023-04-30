// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses user defined functions

#include <stdio.h>

void calculateArea()
{
    // input
    printf("Enter the length of a rectangle (cm): ");
    int length;
    scanf("%d", &length);
    printf("Enter the width of a rectangle (cm): ");
    int width;
    scanf("%d", &width);

    // process
    int area = length * width;

    // output
    printf("The area is %d cm²\n\n", area);
}

void calculatePerimeter()
{
    // input
    printf("Enter the length of a rectangle (cm): ");
    int length;
    scanf("%d", &length);
    printf("Enter the width of a rectangle (cm): ");
    int width;
    scanf("%d", &width);

    // process
    int perimeter = 2 * (length + width);

    // output
    printf("The perimeter is %d cm\n\n", perimeter);
}

int main() {
    // call functions
    calculateArea();
    calculatePerimeter();

    printf("\nDone.\n");
    return 0;
}
