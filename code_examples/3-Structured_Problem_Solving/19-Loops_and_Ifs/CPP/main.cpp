// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program is the Fizz Buzz program

#include <iostream>

int main() {
    // this function is the Fizz Buzz program
    for (int counter = 1; counter <= 100; counter++) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            std::cout << "Fizz-Buzz" << std::endl;
        } else if (counter % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (counter % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        }  else {
            std::cout << counter << std::endl;
        }
    }

    std::cout << "\nDone." << std::endl;
    return 0;
}
