// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows declaring constants

#include <stdio.h>

int main() {
    // constant definition
    const int ROOM_NUMBER = 212;
    const float HST = 0.13;
    const char COUNTRY[6] = "Canada";

    printf("Room: %d\n", ROOM_NUMBER);
    printf("HST %.2f%%\n", HST);
    printf("%s\n", COUNTRY);

    printf("\nDone.\n");
    return 0;
}
