// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks your grade

#include <stdio.h>
#include <ctype.h>

int main() {
    // this function checks your grade
    char gradeLevel;  // a single character

    // input
    printf("Enter grade mark as a single character(ex: A, B, ...): ");
    scanf("%c", &gradeLevel);

    // process and output
    // Note you need the break in C or it will move to next
    // line in switch statement if it is true again
    switch (toupper(gradeLevel)) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Average.\n");
            break;
        case 'D':
            printf("Poor.\n");
            break;
        case 'F':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    printf("\nDone.\n");
    return 0;
}
