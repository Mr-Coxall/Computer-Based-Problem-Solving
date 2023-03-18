// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 10;
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
