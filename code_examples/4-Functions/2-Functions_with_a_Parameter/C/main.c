// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area of circle

#include <stdio.h>
#include <math.h>

void calculateArea(int radius) {
    // this function calculates the area of circle

    // process
    int area = M_PI * radius ** 2;

    // output
    printf("The area is %d cm²\n", area);
}

int main() {
    // input
    printf("Enter the radius of a circle (cm): ");
    int radius;
    scanf("%d", &radius);
    printf("\n");

    // call functions
    calculateArea(radius);

    printf("\nDone.\n");
    return 0;
}
