// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a map

#include <iostream>
#include <map>

int main() {
    // this function uses a map
    std::string airportName = "";

    // an empty map
    std::map<std::string, std::string> airports;

    // a map filled with data
    std::map<char, int> someInfo = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
    };

    // adding items
    airports.insert(std::pair<std::string, std::string>("YYZ", "Toronto Pearson"));
    airports.insert(std::pair<std::string, std::string>("YOW", "Ottawa Canada"));
    airports["DUB"] = "Dublin Ireland";
    airports["LHR"] = "London Heathrow";

    std::cout << "All the airports:" << std::endl;
    for (auto const &pair : airports) {
        std::cout << "The airport code is " << pair.first << " for " << pair.second << std::endl;
    }
    std::cout << " " << std::endl;

    std::cout << "Type in an airport code: ";
    std::cin >> airportName;
    std::cout << " " << std::endl;

    if (airports.count(airportName) > 0) {
        std::cout << "The name of the airport you chose is " << airports[airportName];
    } else {
        std::cout << "That airport is not in the airport's dictionary.";
    }

    std::cout << " " << std::endl;

    std::cout << "\nDone." << std::endl;
    return 0;
}
