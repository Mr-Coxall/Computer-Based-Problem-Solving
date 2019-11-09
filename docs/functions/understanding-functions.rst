.. _understanding-functions:

Understanding Functions
=======================

A `Subroutine <https://en.wikipedia.org/wiki/Subroutine>`_ or what we will just refer to as a function is a block of code written to perform a specific task. We have actually been using functions all along our programming journey so far and you probably have not even notices. Many functions are built into most programming languages, like the print() function for example. In python we usually placing our code in main(), which is a function. In C++, it looks for the main() function to start running its program. You can also create functions to do specific calculations, like converting temperature from Celsius to Fahrenheit for example. This type of conversion is very common and we might want to use it in another program (re-usability is very important in programming. Why re-invent the wheel, just use someone else's code).

Functions need to have two (2) seperate mechanisms to work correctly. You need a way to create the function in your program and you also need a way to then "call" the function and get the code inside of it to run. Although not normally needed for the computer, we usually place the function definition before we call the function, so that when people are actually reading the code they have seen the function definition and know what it will do *before* they see it being called.

This is a good template for keeping all the parts of your program organized in a program file:

1. comment header
2. global (to the file) constant(s)
3. global (to the file) variable(s)
4. function(s)
5. main body of code

Creating and Calling a  Function
--------------------------------

Each programming language has its own syntax to create and call a function. Here is an example:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Oct 2019
		// This program uses user defined functions

		#include <iostream>

		// note: the style for the function name is following Google's style guide
		//       https://google.github.io/styleguide/cppguide.html#Function_Names
		void CalculateArea() {
		    // calculate area

		    int length;
		    int width;
		    int area;

		    // input
		    std::cout << "Enter the length of a rectangle (cm): ";
		    std::cin >> length;
		    std::cout << "Enter the width of a rectangle (cm): ";
		    std::cin >> width;

		    // process
		    area = length * width;

		    // output
		    std::cout << "The area is " << area << "cm^2" << std::endl << std::endl;
		}


		void CalculatePerimeter() {
		    // calculate perimeter

		    int length;
		    int width;
		    int perimeter;

		    // input
		    std::cout << "Enter the length of a rectangle (cm): ";
		    std::cin >> length;
		    std::cout << "Enter the width of a rectangle (cm): ";
		    std::cin >> width;

		    // process
		    perimeter = 2 * (length + width);

		    // output
		    std::cout << "The perimeter is "<< perimeter << "cm"
		              << std::endl << std::endl;
		}

		main() {
		    // this function just calls other functions

		    // call functions
		    CalculateArea();
		    CalculatePerimeter();
		}



  .. group-tab:: Go

    .. code-block:: Go

      // functions

  .. group-tab:: Java

    .. code-block:: Java

      // functions

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // functions

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Oct 2019
		# This program uses user defined functions


		def calculate_area():
		    # calculate area
		    
		    # input
		    length = int(input("Enter the length of a rectangle (cm): "))
		    width = int(input("Enter the width of a rectangle (cm): "))
		    
		    # process
		    area = length * witdh
		    
		    # output
		    print("The area is {0} cm²".format(area))


		def calculate_perimeter():
		    # calculate perimeter
		    
		    # input
		    length = int(input("Enter the length of a rectangle (cm): "))
		    width = int(input("Enter the width of a rectangle (cm): "))
		    
		    # process
		    perimeter = 2 * (length + width)
		    
		    # output
		    print("The perimeter is {0} cm".format(perimeter))
		    
		def main():
		    # this function just calls other functions
		    
		    # call functions
		    calculate_area()
		    calculate_perimeter()


		if __name__ == "__main__":
		    main()



  .. group-tab:: Ruby

    .. code-block:: Ruby

      // functions


  .. group-tab:: Swift

    .. code-block:: Swift

      // functions

