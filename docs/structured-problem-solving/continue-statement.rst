.. _continue-statement:

Continue Statement
==================

The continue statement gives you the option to skip over the part of a loop where an external condition is triggered, but to go on to complete the rest of the loop. That is, the current iteration of the loop will be disrupted, but the program will return to the top of the loop. The continue statement will be within the block of code under the loop statement, usually after a conditional if statement.

The continue statement (in most computer programming languages) takes the generic form of:

| **WHILE** bolean expression
|    counter = counter + 1
|    **IF** bolean expression **THEN**
|        **CONTINUE**
|    **ENDIF**
|    statement_1 
|    statement_2
|    ...
| **END**

| **FOR** counter in range(n)
|    counter = counter + 1
|    ...
|    **IF** bolean expression **THEN**
|        **CONTINUE**
|    **ENDIF**
|    statement_1 
|    statement_2
| **END**

The flowchart for a Continue statement will look like this:

.. image:: ./images/continue-statement.png
   :alt: Continue Statement
   :align: center 

The following code snippet is a continue program:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Oct 2019
		// This program uses a continue statement

		#include <iostream>

		main() {
		    // this function uses a continue statement
		    int positiveInteger;

		    // input
		    std::cout << "Enter a count-down number (ex: 10): ";
		    std::cin >> positiveInteger;

		    // process & output
		    while (positiveInteger > 0) {
		        // yes, this is the exception on placing the counter at the top
		        positiveInteger = positiveInteger - 1;
		        
		        if (positiveInteger == 5) {
		            continue;
		        }
		        std::cout << "Current variable value : " << positiveInteger << std::endl;
		    }
		    
		    std::cout << "Good bye!";
		}

  .. group-tab:: Go

    .. code-block:: Go

      // continue statement

  .. group-tab:: Java

    .. code-block:: Java

      // continue statement


  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // continue statement

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Oct 2019
		# This program uses a continue statement


		def main():
		    # this function uses a continue statement

		    # input
		    positive_integer = int(input("Enter a count-down number (ex: 10): "))
		    print("")

		    # process & output
		    while positive_integer > 0:
		        # yes, this is the exception on placing the counter at the top
		        positive_integer = positive_integer - 1
		        
		        if positive_integer == 5:
		            continue
		        print("Current variable value : {}".format(positive_integer))
		    
		    print("Good bye!")


		if __name__ == "__main__":
		    main()

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // continue statement

  .. group-tab:: Swift

    .. code-block:: Swift

      // continue statement
