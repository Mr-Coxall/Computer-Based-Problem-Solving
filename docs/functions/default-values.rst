.. _default-values:

Default Values
==============

All of the functions that we have looked at to this point, you had to ensure that you were sending the exact same number of parameters to the function as it was expecting. To help us do this a good IDE will have "auto-complete" gives us a little pop out window to show us what should be passed over to the function.

Some built in functions we have been using can be accessed in multiple different ways though. For example in Python there is a built in function called random.randrange(). It is kind of like random.ranint() that we have used in the past. Here is the definition for random.ranint():

random.randint(a, b)
Return a random integer N such that a <= N <= b. Alias for randrange(a, b+1).

Notice that "a & b" are our starting and ending points. 

Here is the definition for random.randrange():

random.randrange(start, stop[, step])

The positional argument pattern matches that of range(). Keyword arguments should not be used because the function may use them in unexpected ways.

First off there is actually 2 seperate ways we could call this function:

- random.randrange(start, stop)
- random.randrange(start, stop, step)

It seems that step is "optional", which it is. By default, if you do not provide it, then python assumes the value is just 1. You can choose for example to place in 2, and then only even numbers will be chosen. Here is how we would define the function random.randrange() to get this optional parameter:

def randrange(start, stop, step = 1):

Notice that right in the declaration of the function, the "default optional parameter" is being set. If it is not provided as a parameter, the default value is just used. Each programming language has its own syntax to make this kind of optional parameter work. Here is an example:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Oct 2019
		// This program uses quadratic formula

		#include <iostream>
		#include <math.h>

		double QuadraticFormula (int a, int b, int c, bool add){
		    // calculates the quadratic formula
		    
		    double x1;
		    double x2;
		    
		    x1 = -b / (2*a);
		    x2 = sqrt(pow(b,2) - 4*a*c) / (2*a);
		    
		    if (add == true) {
		        return x1 + x2;
		    } else {
		        return x1 - x2;
		    }
		}


		main() {
		    // This program uses quadratic formula

		    int aValue;
		    int bValue;
		    int cValue;
		    int aValueAsInt;
		    int bValueAsInt;
		    int cValueAsInt;
		    int discriminant;
		    double solution;
		    double solution1;
		    double solution2;

		    // input
		    std::cout << "Enter a: ";
		    std::cin >> aValue;
		    std::cout << "Enter b: ";
		    std::cin >> bValue;
		    std::cout << "Enter c: ";
		    std::cin >> cValue;
		    std::cout << std::endl;
		    
		    // process
		    try{
		        aValueAsInt = int(aValue);
		        bValueAsInt = int(bValue);
		        cValueAsInt = int(cValue);
		        
		        discriminant = pow(bValueAsInt, 2) - 4*aValueAsInt*cValueAsInt;
		        
		        if (discriminant < 0) {
		            std::cout << "There is no solution";
		        } else if (discriminant == 0) {
		            solution = QuadraticFormula(aValueAsInt, bValueAsInt, 
		                                        cValueAsInt, true);
		            std::cout << "The solution is " << solution << std::endl;
		        } else {
		            solution1 = QuadraticFormula(aValueAsInt, bValueAsInt, 
		                                         cValueAsInt, true);
		            solution2 = QuadraticFormula(aValueAsInt, bValueAsInt, 
		                                         cValueAsInt, false);
		            std::cout << "The solutions are " << solution1 << " and " 
		                      << solution2;
		        }
		    } catch (...) {
		        std::cout << "Theses are not integers";
		    }
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

		# Created by : Mr. Coxall
		# Created on : October 2019
		# This program prints out your name


		def full_name(first_name,last_name, middle_name = None):
		    # return the full NameError

		    full_name = first_name
		    if middle_name != None:
		        full_name = full_name + " " + middle_name[0]
		    full_name = full_name + " " + last_name

		    return full_name
		  
		def main():
		    # gets a users name and prints out their formal name
		    middle_name = None
		    
		    first_name = input("Enter your first name: ")
		    question = input("Do you have a middle name? (y/n): ")
		    if question.upper() == "Y" or question.upper() == "YES":
		        middle_name = input("Enter your middle name: ")
		    last_name = input("Enter your last name: ")

		    if middle_name != None:
		        name = full_name(first_name, last_name, middle_name)
		    else:
		        name = full_name(first_name, last_name)

		    print(name)

		if __name__ == "__main__":
		    main()



  .. group-tab:: Ruby

    .. code-block:: Ruby

      // return values


  .. group-tab:: Swift

    .. code-block:: Swift

      // return values
