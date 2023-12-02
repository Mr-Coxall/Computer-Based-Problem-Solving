// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows declaring variables

#include <stdio.h>
#include <stdbool.h>

int main() {
    // variable definition
    bool isCurrent = true;  // bool
    int age = 42;  // int
    float area = 42.42;  // float
    char someWords[13] = "Hello, World!";  // string

    printf("%d\n", isCurrent);
    printf("%d\n", age);
    printf("%.2f\n", area);
    printf("%s\n", someWords);

    printf("\nDone.\n");
    return 0;
}
