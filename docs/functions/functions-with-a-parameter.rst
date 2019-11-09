.. _functions-with-a-parameter:

Functions with a Parameter
==========================

A function often needs pieces of information to be able to complete its work. In the last section you might have noticed that I had to ask for the length and width twice, once for each of the area and perimeter calculations, clearly not ideal. One method of doing this is to declare the variable as a *global variable* and then any code within that file can access it. This is a very bruit force method and is **very bad programming style**. By doing it this way, the variable is created and held in memory for the entire time the file is running, even thought the information may only be needed for a small fraction of the time. Also the function is no longer portable, since it relies on external global variables that might not exist in another program. A better, more elegant and more memory friendly way is to pass the information into the function using a `parameter <https://en.wikipedia.org/wiki/Parameter_(computer_programming)>`_. There are three main ways to pass information to a function, by value, by reference and by object reference. For the time being we will just consider by value. (We will even assume python is doing by value, even though it is really doing by object reference.)

Passing By Value
----------------

The first method of transferring information to a function is to pass it `“By Value” <https://www.mathwarehouse.com/programming/passing-by-value-vs-by-reference-visual-explanation.php>`_. This means that a copy of the data is made and it is passed over to the function to do with it what it pleases. Since it is a **copy** of the data, any changes to the data are not reflected in the original variable. A variable or value passed along inside a function call is called an `parameter <https://en.wikipedia.org/wiki/Parameter_(computer_programming)>`_ . Parameter(s) are usually placed inside a bracket when you invoke the function. For example:

.. code-block:: Python
    calculate_area(length_from_user, width_from_user)

.. code-block:: C++
    CalculateArea(lengthFromUser, widthFromUser);


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

		void calculate_area() {
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


		void calculate_perimeter() {
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
		    std::cout << "The perimeter is "<< perimeter << "cm" << std::endl << std::endl;
		}

		main() {
		    // this function just calls other functions
		    
		    // call functions
		    calculate_area();
		    calculate_perimeter();
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


		def calculate_area(length, width):
		    # calculate area

		    # process
		    area = length * width
		    
		    # output
		    print("The area is {0} cm²".format(area))


		def calculate_perimeter(length, width):
		    # calculate perimeter
		    
		    # process
		    perimeter = 2 * (length + width)
		    
		    # output
		    print("The perimeter is {0} cm".format(perimeter))
		    
		def main():
		    # this function just calls other functions
		    
		    # input
		    length_from_user = int(input("Enter the length of a rectangle (cm): "))
		    width_from_user = int(input("Enter the width of a rectangle (cm): "))
		    
		    #call functions
		    calculate_area(length_from_user, width_from_user)
		    calculate_perimeter(length_from_user, width_from_user)


		if __name__ == "__main__":
		    main()




  .. group-tab:: Ruby

    .. code-block:: Ruby

      // functions


  .. group-tab:: Swift

    .. code-block:: Swift

      // functions

