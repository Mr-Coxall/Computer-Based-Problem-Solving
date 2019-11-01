.. _loops-and-if-statements:

Loops and If Statements
=======================

As you can probably guess from now, yes you can place loops inside if statements and if statements inside loops. 

An if statement inside a loop would (in most computer programming languages) take the generic form of:

| **FOR** counter in range(n)
|     **IF** (boolean expression) **THEN** 
|         Statements to be performed
|     **ENDIF**
| **END** 

or using While loops:

| **WHILE** counter1 <= n :
|     **IF** (boolean expression) **THEN** 
|         Statements to be performed
|     **ENDIF**
|     ...
|     counter1 = counter1 + 1
| **END**

Here is one of the most well-known examples of the exercises that you might be given as the opening question in a junior data scientist job interview.

The task is:
*Go through all the numbers up until 99. Print ‘fizz’ for every number that’s divisible by 3, print ‘buzz’ for every number divisible by 5, and print ‘fizzbuzz’ for every number divisible by 3 and by 5! If the number is not divisible either by 3 or 5, print a dash (‘-‘)!*

In a flow chart it looks like:

.. image:: ./images/loops-and-if-statements.png
   :alt: Loops and If Statements
   :align: center 

The following code snippet is a nested loop example of a 2 digit odometer:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Oct 2019
		// This program uses a nested loop

		#include <iostream>

		main() {
		    // this function uses a nested loop
		    int counter1;
		    int counter2;

		    // process & output
		    for (counter1 = 0; counter1 < 10; counter1++) {
		        for (counter2 = 0; counter2 < 10; counter2++) {
		            std::cout << "Odometer reading: " << counter1 << counter2 << std::endl;
		        }
		    }
		}

  .. group-tab:: Go

    .. code-block:: Go

      // nested loop

  .. group-tab:: Java

    .. code-block:: Java

      // nested loop


  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // nested loop

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Oct 2019
		# This program uses a nested loop


		def main():
		    # this function uses a nested loop
		    
		    counter1 = 0
		    counter2 = 0

		    # process & output
		    for counter1 in range(10):
		        for counter2 in range(10):
		            print("Odometer {0}{1}".format(counter1, counter2))


		if __name__ == "__main__":
		    main()

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // nested loop

  .. group-tab:: Swift

    .. code-block:: Swift

      // nested loop
