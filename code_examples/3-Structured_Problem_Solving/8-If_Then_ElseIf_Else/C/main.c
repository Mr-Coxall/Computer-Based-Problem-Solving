// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks a traffic light

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // this function checks a traffic light
    char lightColor[10];

    // input
    printf("Enter the color of the traffic light: ");
    scanf("%s", lightColor);

    // process and output
    if (strcmp(lightColor, "red") == 0) {
        printf("Stop!\n");
    } else if (strcmp(lightColor, "yellow") == 0) {
        printf("Slow down!\n");
    } else if (strcmp(lightColor, "green") == 0) {
        printf("Go!\n");
    } else {
        printf("Not a valid color.\n");
    }

    printf("\nDone.\n");
    return 0;
}
