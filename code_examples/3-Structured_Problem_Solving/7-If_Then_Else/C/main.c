// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks if ther is over 30 students

#include <stdio.h>

int main() {
    // this function checks if ther is over 30 students
    const int MAX_STUDENT_NUMBER = 30;
    int numberOfStudents;

    // input
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // process
    if (numberOfStudents > MAX_STUDENT_NUMBER) {
        // output
        printf("Too many students!\n");
    }

    printf("\nDone.\n");
    return 0;
}
