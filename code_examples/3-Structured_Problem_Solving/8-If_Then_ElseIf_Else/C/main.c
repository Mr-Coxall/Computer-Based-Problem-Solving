// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks a traffic light

#include <stdio.h>

int main() {
    // this function checks a traffic light
    char lightColor[7];

    // input
    printf("Enter the color of the traffic light: ");
    scanf("%s", lightColor);

    // process and output
    if (lightColor == "red") {
        printf("Stop!\n");
    } else if (lightColor == "yellow") {
        printf("Slow down!\n");
    } else if (lightColor == "green") {
        printf("Go!\n");
    } else {
        printf("Not a valid color.\n");
    }

    printf("\nDone.\n");
    return 0;
}
