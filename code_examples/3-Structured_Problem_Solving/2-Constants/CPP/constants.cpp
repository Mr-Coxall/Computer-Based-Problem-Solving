// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program shows declaring constants

#include <iostream>

int main() {
    // constant definition
    int ROOM_NUMBER = 212;  // int
    float HST = 0.13;  // float
    std::string COUNTRY = "Canada";  // string

    std::cout << "Room: " << ROOM_NUMBER << std::endl;
    std::cout << HST << "%" << std::endl;
    std::cout << COUNTRY << std::endl;

    std::cout << "\nDone." << std::endl;
}
