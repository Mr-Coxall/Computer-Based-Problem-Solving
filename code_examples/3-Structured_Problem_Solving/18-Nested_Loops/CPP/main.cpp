// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a nested loop

#include <iostream>

int main() {
    // this function uses a nested loop

    // process & output
    for (int counter1 = 0; counter1 < 10; counter1++) {
        for (int counter2 = 0; counter2 < 10; counter2++) {
            std::cout << "Odometer: " << counter1 << counter2 << std::endl;
        }
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
