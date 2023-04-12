// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows assingment statements

#include <stdio.h>
#include <string.h>

int main() {
    // variable definition
    int numberOfStudents = 2;
    float width = 32.5F;
    float length = 10.0F;
    float areaOfRectangle = 0;
    char someWords1[] = "Hello";
    char someWords2[] = "World!";
    char helloWorld[13] = "";

    // using assignment statements
    numberOfStudents = numberOfStudents + 5;
    areaOfRectangle = length * width;
    strcat(helloWorld, someWords1);
    strcat(helloWorld, ", ");
    strcat(helloWorld, someWords2);

    // output
    printf("The number of students is: %d\n", numberOfStudents);
    printf("The area of a rectangle is: %.2f cm²\n", areaOfRectangle);
    printf("%s\n", helloWorld);

    printf("\nDone.\n");
    return 0;
}
