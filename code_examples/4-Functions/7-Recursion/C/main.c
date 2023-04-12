// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks if there is over 30 students

#include <stdio.h>

int main() {
    // this function checks if there is over 30 students
    const int MAX_STUDENT_NUMBER = 30;
    int numberOfStudents;

    // input
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // process and output
    if (numberOfStudents > MAX_STUDENT_NUMBER) {
        printf("Too many students!\n");
    } else {
        printf("Not too many students.\n");
    }

    printf("\nDone.\n");
    return 0;
}
