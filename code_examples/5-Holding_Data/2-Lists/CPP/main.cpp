// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program program uses a list

#include <iostream>
#include <list> // need this for Lists

int main() {
    // this function uses a list
    std::list<std::string> words;
    std::string tempWord = "Go";
    std::list<std::string> reversedWords;

    // input
    std::cout << "Please enter 1 word at a time. Enter 'S' to end." << std::endl;

    while (tempWord != "STOP") {
        std::cout << "Enter a word: ";
        std::cin >> tempWord;
        words.push_back(tempWord);
    }

    words.pop_back(); // remove the "Stop" that was added
    std::cout << "" << std::endl;

    // reversed words
    std::cout << "Here are the words reversed.:" << std::endl;
    while (!words.empty()) {
        std::cout << words.back() << std::endl;
        words.pop_back();
    }

    std::cout << "\nDone." << std::endl;
}
