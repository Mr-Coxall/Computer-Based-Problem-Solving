.. _associative_array:

Associative Array
=================

An `associative array <https://en.wikipedia.org/wiki/Associative_array>`_, dictionary, map, or symbol table all refer to the same thing, usually, in computer science. It is an abstract data type composed of a collection of key and value pairs, such that each possible key appears at most once in the collection. The key and value can usually be of almost any type, although usually the key is represented by a string. (If it was an integer, then you would just have an array!). The data type usually comes with operators like, the addition of a pair to the collection, the removal of a pair from the collection, the modification of an existing pair, the lookup of a value associated with a particular key.

You can think of associative arrays like a list of phone numbers. In this list, you can look up a person's name by finding their phone number. The name is the value and the number is the key. This list would look like the following table:

+----------------+--------------+
| Phone Number   | Name         |
+================+==============+
| 1-203-456-4657 | John Doe     |
+----------------+--------------+
| 1-964-725-5617 | Jane Smith   |
+----------------+--------------+
| 1-275-486-8562 | Daniel Brown |
+----------------+--------------+
| 1-347-374-3412 | John Doe     |
+----------------+--------------+

Associative arrays have two important properties. Every key can only appear once, just like every phone number can only appear once in a directory. And, every key can only have one value, just like every phone number can only refer to one person. It is possible that two people can have the same name in this list, so it's important to remember that a given value can appear more than once in an associative array.

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Dec 2019
		// This program uses an associative array

		#include <iostream>
		#include <map>


		main() {
		    // this function uses an associative array
		    
		    std::string airportName = "";
		    
		    // an empty map
		    std::map<std::string,std::string> airports;
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
		    
		    std::cout << "Type in an airport code: ";
		    std::cin >> airportName;
		    std::cout << " " << std::endl;
		    
		    if (airports.count(airportName) > 0) {
		        std::cout << "The name of the airport you chose is " << airports[airportName];
		    } else {
		        std::cout << "That airport is not in the airport's dictionary.";
		    }
		    std::cout << " " << std::endl;
		    std::cout << " " << std::endl;


		    std::cout << "All the airports:" << std::endl;
		    for (auto const& pair: airports) {
		        std::cout << "The airport code is " << pair.first << " for " << pair.second << std::endl;
		    }

		    std::cout << " " << std::endl;
		}
		

  .. group-tab:: Go

    .. code-block:: Go

      // associative array

  .. group-tab:: Java

    .. code-block:: Java

      // associative array

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // associative array

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Dec 2019
		# This program uses an associative array


		def main():
		    # this function uses an associative array
		    
		    airports = {}
		    some_info = {'item1': 1,
		                 'item2': 2,
		    }
		    
		    # adding items
		    airports['YYZ'] = "Toronto Pearson"
		    airports['YOW'] = "Ottawa Canada"
		    airports['DUB'] = "Dublin Ireland"
		    airports['LHR'] = "London Heathrow"
		    

		    airport_name = input("Type in an airport code: ")
		    if airport_name in airports.keys():
		        print("The name of the airport you chose is {0}.".format(airports[airport_name]))
		    else:
		        print("That airport is not in the airport's dictionary.")
		    print("")
		    
		    print("All the airports:")
		    for key, value in airports.items():
		        print("The airport code is {0} for {1}.".format(key, value))


		if __name__ == "__main__":
		    main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // associative array

  .. group-tab:: Swift

    .. code-block:: Swift

      // associative array