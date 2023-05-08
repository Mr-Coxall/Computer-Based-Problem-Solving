// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the area of circle

#include <stdio.h>
#include <math.h>

float calculateArea(int radius) {
    // this function calculates the area of circle

    // process
    float area = M_PI * radius ** 2;

    return area;
}

int main() {
    int radius;
    float area = 0.0;

    // input
    printf("Enter the radius of a circle (cm): ");
    scanf("%d", &radius);
    printf("\n");

    // call functions
    area = calculateArea(radius);

    // output
    printf("The area is %f cm²\n", area);

    printf("\nDone.\n");
    return 0;
}
