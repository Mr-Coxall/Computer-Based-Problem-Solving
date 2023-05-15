// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array

#include <stdio.h>

int main() {
    // this function uses an array

    int studentMarks[5];
    int aSingleMark;

    // input
    for (int loop_counter = 0; loop_counter < 5; loop_counter++) {
        printf("Enter a mark (percentage): ");
        scanf("%d", &aSingleMark);
        studentMarks[loop_counter] = aSingleMark;
    }
    printf("\n");

    printf("Here are the 5 marks:\n");

    // get length of array
    int arrayLength = sizeof(studentMarks) / sizeof(studentMarks[0]);

    for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
        printf("%d%% ", studentMarks[loop_counter]);
    }

    printf("\n");
    printf("\nDone.\n");
    return 0;
}
