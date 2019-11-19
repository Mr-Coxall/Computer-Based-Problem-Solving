.. _return-values:

Return Values
=============

If this was math class, the definition of a `mathimatical function <https://en.wikipedia.org/wiki/Function_(mathematics)>`_ might be, "... a function is a relation between sets that associates to every element of a first set exactly one element of the second set.", which is a fancy way to say that if you put in a particular number into the function you get one and only one number out and it will always be the same value. The key is that you actually get something back. In computer science it is also common for functions to give you something back and we normally call this a `return value or statement <https://en.wikipedia.org/wiki/Return_statement>`_.

We have already seen many built in functions that have a return value, like the square root function:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// square root function
		someVariable = sqrt(someNumber);

  .. group-tab:: Go

    .. code-block:: Go

      // square root function

  .. group-tab:: Java

    .. code-block:: Java

      // square root function

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // square root function

  .. group-tab:: Python3

    .. code-block:: Python

		# square root function
		some_variable = math.sqrt(some_number)

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // square root function


  .. group-tab:: Swift

    .. code-block:: Swift

      // square root function

You will notice that the function is now on the right hand side of an assignment statement and the calculated value is being placed right into another variable. To allow this ability, we normally use the reserved word "return" to pass the value back. In many programming languages, in the definition of the function you must specify what type of variable will be returned. This way the IDE can confirm that the same types are being passe back and placed into variable of the same type. This way the language remains type safe.

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// function definition with a return value
		int CalculateArea(int length, int width) {
		    // calculate area
		    int area;

		    area = length * width;

		    return area;
		}

  .. group-tab:: Go

    .. code-block:: Go

      // function definition with a return value

  .. group-tab:: Java

    .. code-block:: Java

      // function definition with a return value

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // function definition with a return value

  .. group-tab:: Python3

    .. code-block:: Python

		# function definition with a return value
		def calculate_area(length, width):
		    # calculate area

		    area = length * width
		    
	    	    return area

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // function definition with a return value


  .. group-tab:: Swift

    .. code-block:: Swift

      // function definition with a return value

Here is the example from last section, this time using return values:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Oct 2019
		// This program uses return values

		#include <iostream>

		int CalculateArea(int length, int width) {
		    // calculate area
		    int area;

		    area = length * width;

		    return area;
		}


		int CalculatePerimeter(int length, int width) {
		    // calculate perimeter
		    int perimeter;

		    perimeter = 2 * (length + width);
		    
		    return perimeter;

		}

		main() {
		    // this function gets length and width
		    
		    int lengthFromUser;
		    int widthFromUser;
		    int calculateArea;
		    int calculatePerimeter;

		    // input
		    std::cout << "Enter the length of a rectangle (cm): ";
		    std::cin >> lengthFromUser;
		    std::cout << "Enter the width of a rectangle (cm): ";
		    std::cin >> widthFromUser;
		    std::cout << std::endl;

		    // call functions
		    calculateArea = CalculateArea(lengthFromUser, widthFromUser);
		    calculatePerimeter = CalculatePerimeter(lengthFromUser, widthFromUser);
		    
		    // output
		    std::cout << "The area is " << calculateArea << "cm^2" << std::endl;
		    std::cout << "The perimeter is "<< calculatePerimeter << "cm" << std::endl;
		}


  .. group-tab:: Go

    .. code-block:: Go

      // return values

  .. group-tab:: Java

    .. code-block:: Java

      // return values

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // return values

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Oct 2019
		# This program uses return values


		def calculate_area(length, width):
		    # calculate area

		    area = length * width
		    
		    return area

		def calculate_perimeter(length, width):
		    # calculate perimeter
		    
		    perimeter = 2 * (length + width)
		    
		    return perimeter
		    
		def main():
		    # this function gets length and width
		    
		    # input
		    length_from_user = int(input("Enter the length of a rectangle (cm): "))
		    width_from_user = int(input("Enter the width of a rectangle (cm): "))
		    print("")
		    
		    #call functions
		    calculated_area = calculate_area(length_from_user, width_from_user)
		    calculated_perimeter = calculate_perimeter(length_from_user, width_from_user)
		    
		    print("The area is {0} cm²".format(calculated_area))
		    print("The perimeter is {0} cm".format(calculated_perimeter))


		if __name__ == "__main__":
		    main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // return values


  .. group-tab:: Swift

    .. code-block:: Swift

      // return values
