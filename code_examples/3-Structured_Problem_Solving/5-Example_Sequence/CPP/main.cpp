// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates total from subtotal and tax

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.13;
    float tax;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // process
    tax = + subTotal * HST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $" 
                << std::fixed << std::setprecision(2) << std::setfill('0')
                << tax << " and the total cost is: $"
                << std::fixed << std::setprecision(2) << std::setfill('0')
                << total << "." << std::endl;

    std::cout << "\nDone. " << std::endl;
}
