// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a compound boolean statement

#include <stdio.h>

int main() {
    // this function uses a compound boolean statement
    int termMark;
    int projectMark;

    // input
    printf("Enter term mark (as %%): ");
    scanf("%d", &termMark);
    printf("Enter project mark (as %%): ");
    scanf("%d", &projectMark);
    printf("\n");

    // process & output
    if (termMark >= 50 && projectMark >= 50) {
        printf("You passed the course.\n");
    } else {
        printf("You did not pass the course.\n");
    }

    printf("\nDone.\n");
    return 0;
}
