// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows how local and global variables work

#include <stdio.h>

// global variable
int variableX = 25;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    printf("Local variableX, variableY, variableZ: %d + %d = %d\n", variableX, variableY, variableZ);
}

void globalVariable() {
    // this shows what happens with global variables
    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    printf("Local variableX, variableY, variableZ: %d + %d = %d\n", variableX, variableY, variableZ);
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    printf("\nDone.\n");
    return 0;
}
