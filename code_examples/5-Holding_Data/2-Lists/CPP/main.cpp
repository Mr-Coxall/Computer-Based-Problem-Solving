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
    std::string tempWord = "temp";
    std::list<std::string> reversedWords;

    // input
    std::cout << "Please enter 1 word at a time. Enter 'S' to end.";
    std::cout << "" << std::endl;

    while (!(toupper(tempWord[0]) == 'S') && !(tempWord.length() != 1)) {
        std::cout << "Enter a word: ";
        std::cin >> tempWord;
        words.push_back(tempWord);
    }

    words.pop_back(); // remove the "Stop" that was added
    std::cout << "" << std::endl;

    // reversed words
    for (std::string tempWord2 : words) {
        reversedWords.push_front(tempWord2);
    }

    std::cout << "Here are the words reversed.:" << std::endl;
    for (std::string tempWord3 : reversedWords) {
        std::cout << tempWord3 << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
