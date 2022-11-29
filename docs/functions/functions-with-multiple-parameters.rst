.. _functions-with-multiple-parameters:

Functions with Multiple Parameters
==================================

All of the functions that we have looked at to this point, there has been one (1) parameter passed into the function. This is not always the case. There might be cases where you need to pass in two (2) or more peices of infomation. Suppose you have a function that calculates the area of a rectangle. In this case unless you are only going to do squares, you will meed a length and a width.

Fortunately you can pass multiple parameters into a function. The thing to remember is that, since you now have more than one (1) item, the order of the parameters is important, since this is how the computer is going to keep track of the different variables.

Since people are not always great at keeping things in order, many programming languages (but not all, for example `C++ does not do this <https://stackoverflow.com/questions/38076786/why-c-doesnt-support-named-parameter>`_) let you pass multiple parameters to functions using "parameteres by keyword". This means that you actually give each parameter a name and then refer to this name when you are passing the values to the function, so there is no confusion about what value is going where.

In the example below, I have a function that can calculate the quadratic formula. Is is important to keep all three (3) parameters organzied, or you will not get the correct answer. To do this each parameter will be given a name:

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
		# This program uses quadratic formula

		import math 


		def quadratic(a: int, b: int, c: int, add: bool) -> float:
		    x1 = -b / (2*a)
		    x2 = math.sqrt(b**2 - 4*a*c) / (2*a)
		    if add == True:
		        return x1 + x2
		    else:
		        return x1 - x2
		    
		def main():
		    # This program uses quadratic formula

		    # input
		    a_value = input("Enter a: ")
		    b_value = input("Enter b: ")
		    c_value = input("Enter c :")
		    print("")

		    # process
		    try:
		        a_value_as_int = int(a_value)
		        b_value_as_int = int(b_value)
		        c_value_as_int = int(c_value)
		        discriminant = (b_value_as_int**2-4*a_value_as_int*c_value_as_int)
		        if discriminant < 0:
		            print ("There is no solution")
		        elif discriminant == 0:
		            solution = quadratic(a = a_value_as_int, b = b_value_as_int, 
		                                 c = c_value_as_int, add = True)
		            print("The solution is {0}".format(solution))
		        else:
		            solution1 = quadratic(add = True, a = a_value_as_int, 
		                                  c = c_value_as_int, b = b_value_as_int)
		            solution2 = quadratic(b = b_value_as_int, c = c_value_as_int,
		                                  a = a_value_as_int, add = False)
		            print("The solutions are {0} and {1}".format(solution1, solution2))
		    except Exception:
		        print("Theses are not integers")


		if __name__ == "__main__":
		    main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // return values


  .. group-tab:: Swift

    .. code-block:: Swift

      // return values
