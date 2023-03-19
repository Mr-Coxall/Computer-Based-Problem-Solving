// Copyright (c) 2020 Mr. Coxall All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program checks a traffic light

#include <iostream>
#include <string>

int main()
{
    // this function checks a traffic light
    std::string lightColor;

    // input
    std::cout << "Enter the color of the traffic light: ";
    std::cin >> lightColor;

    // process and output
    if (lightColor == "red")
    {
        std::cout << "Stop!" << std::endl;
    }
    else if (lightColor == "yellow")
    {
        std::cout << "Slow down!" << std::endl;
    }
    else if (lightColor == "green")
    {
        std::cout << "Go!" << std::endl;
    }
    else
    {
        std::cout << "Not a valid color." << std::endl;
    }

    std::cout << std::endl
              << "Done." << std::endl;
    return 0;
}
