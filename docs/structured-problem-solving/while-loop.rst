.. _while-loop:

While Loop
==========

The `While loop <https://en.wikipedia.org/wiki/While_loop>`_ is a repetition structure where the statements in the structure are repeated as long as the boolean expression is true. The flow of logic keeps coming back up to the Boolean expression to check if it is still true. As soon as the boolean expression is false, the flow of logic hops down to the end of the loop. The boolean condition is also checked before the looping statements are executes the first times. This mean if the condition is not true the first time, the statements will never happen. 

The while loop (in most computer programming languages) takes the generic form of:

| **WHILE** boolean expression:
|    statement(s)
| **END**

The flowchart for a While Loop will look like this:

.. image:: ./images/while-loop.png
   :alt: While Loop
   :align: center 

It is a common occurrence to have an accumulator or counter within a looping structure. The counter, usually, is incremented (1 is added) or decremented (1 is subtracted) each time the condition is meet and the statements inside the loop are performed. When the counter reaches a certain number that is expressed inside the boolean statement, then the loop is exited. Ensure you use proper style and do not do what is very common in programming, just declare the variable as i, j or x. Always name a variable for what it is actually doing and holding.

The following code snippet, show an adding program. The program takes all the positive integer values, staring at 1 and adds them together until you reach the number you have chosen to end at. For example, if you select 5 then the answer is equal to 1+2+3+4+5 = 15

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Oct 2019
		// This program uses a while loop

		#include <iostream>

		main() {
		    // this function uses a while loop
		    int positiveInteger;
		    int loopCounter = 0;
		    int sum = 0;

		    // input
		    std::cout << "Enter an positive integer: ";
		    std::cin >> positiveInteger;

		    // process
		    while (loopCounter <= positiveInteger) {
		        sum = sum + loopCounter;
		        loopCounter = loopCounter + 1;
		    }

		    // output
		    std::cout << "The sum of all positive numbers from 1 to " <<
		                 positiveInteger << " is " << sum << std::endl;
		}



  .. group-tab:: Go

    .. code-block:: Go

      // while loop

  .. group-tab:: Java

    .. code-block:: Java

      // while loop

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // while loop

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Oct 2019
		# This program uses a while loop


		def main():
		    # this function uses a while loop
		    loop_counter = 0
		    sum = 0

		    # input
		    positive_integer = int(input("Enter an positive integer: "))
		    print("")

		    # process & output
		    while loop_counter <= positive_integer:
		        sum = sum + loop_counter
		        loop_counter = loop_counter + 1

		    print("The sum of all positive numbers from 1 to {0} is {1}"
		          .format(positive_integer, sum))


		if __name__ == "__main__":
		    main()



  .. group-tab:: Ruby

    .. code-block:: Ruby

      // while loop

  .. group-tab:: Swift

    .. code-block:: Swift

      // while loop

