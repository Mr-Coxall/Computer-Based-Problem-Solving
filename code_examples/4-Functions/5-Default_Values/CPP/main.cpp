// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program prints out your name, using default function parameters

#include <iostream>

std::string FullName(std::string firstName, std::string lastName,
                     std::string middleName = "") {
    // return the full formal name

    std::string fullName;

    fullName = firstName;
    if (middleName.size() != 0) {
        fullName = fullName + " " + middleName[0] + ".";
    }
    fullName = fullName + " " + lastName;

    return fullName;
}


int main() {
    // gets a users name and prints out their formal name

    std::string firstName;
    std::string question;
    std::string middleName = "";
    std::string lastName;
    std::string fullName;

    // input
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Do you have a middle name? (y/n): ";
    std::cin >> question;
    if (question == "Y" || question == "YES" || question == "y") {
        std::cout << "Enter your middle name: ";
        std::cin >> middleName;
    }
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // call functions
    if (middleName != "") {
        fullName = FullName(firstName, lastName, middleName);
    } else {
        fullName = FullName(firstName, lastName);
    }
    std::cout << "Your formal name is " << fullName << ".";

    std::cout << "\nDone." << std::endl;
    return 0;
}