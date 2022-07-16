.. _if-then:

If…Then
=======

The If…Then structure is a conditional statement, or sometimes referred to as a decision structure. It is used to perform a section of code **if and only if** the condition is true. The condition is checked by using a Boolean statement. If the condition is not true (meaning false), then the section of code is not performed it is just passed over. The form of an If…Then statement is:

| **IF** (boolean expression) **THEN** 
|    Statements to be performed
| **ENDIF**

The indentation (usually 4 spaces, **NOT A TAB**) used in the If…Then statement is a coding convention used in almost every language. It is there to make the statement easier to read. It has no effect on how the code works and could be ignored; however, it is **REALLY BAD** programming style not to have it. You will also notice that some programming languages like to place the Boolean expression in brackets, while others do not. It is just style, but you should follow the language's style. 

Here is a problem that can be solved using an If…Then statement. I have a class that can only hold 30 students because that is how many chairs I have. As the user to enter a number of students and tell me if I have too many students for chairs.

You top-down design will have a decision logic in it. You **do not** use a diamond in a top-down design, you still only use rectangles. Here is what a top-down design might look like for this problem:

.. image:: ./images/top-down-decision.png
   :alt: Top-Down Design for If…Then statement
   :align: center 

Remember from the section on flowcharts, the diamond shape represented decisions. The If…Then statement is the translation of a decision in a flowchart to code. The above examples would look like the following in a flowchart:

.. image:: ./images/if-then.png
   :alt: If…Then flowchart
   :align: center 

You will also be using If…Then statements in pseudo-code. The above problem looks like this in pseudo-code. Note that you do indent when you are inside an If…Then statement in pseudo-code. Also note that "**IF**", "**THEN**" and "**ENDIF**" are all bold and caps:

| **GET** number_of_students
| **IF** (number_of_students > 30) **THEN**
|     **SHOW** "Too many students!"
| **ENDIF**

In the code examples below, if the variable numberOfStudents (or number_of_students) happens to be a number that is greater than 30 (say 32), the next line of code is performed (print("Too many Students!")). If the variable is not greater than 30 (say it is exactly 30), then the next line of code is skipped over and NOT performed.

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Sep 2019
		// This program checks if ther is over 30 students

		#include <iostream>

		int main() {
		    // this function checks if ther is over 30 students
		    const int MAX_STUDENT_NUMBER = 30;
		    int numberOfStudents;

		    // input
		    std::cout << "Enter the number of students: ";
		    std::cin >> numberOfStudents;
		    std::cout << "" << std::endl;

		    // process
		    if (numberOfStudents > MAX_STUDENT_NUMBER) {
		        // output
		        std::cout << "Too many students!";
		    }
		}


  .. group-tab:: Go

    .. code-block:: Go

		// if ... then example
		if numberOfStudents > 30 {
		    fmt.Println("Too many students!")
		}

  .. group-tab:: Java

    .. code-block:: Java

		// if ... then example
		if (numberOfStudents > 30) {
		    print("Too many students!");
		}

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

		/**
		* Created by: Mr. Coxall
		* Created on: Sep 2020
		* This program shows an if statement
		*/

		// this allows for console input in Node.js
		const prompt = require('prompt-sync')()

		// input
		const numberOfStudents = prompt("Enter the number of students: ")

		// process & output
		if (numberOfStudents > 30) {
	      console.log("Too many students!")
		}

		console.log("\nDone.")


  .. group-tab:: Python

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Sep 2019
		# This program checks if there is over 30 students


		import constants


		def main():
		    # this function checks if there is over 30 students

		    # input
		    number_of_students = int(input("Enter the number of students: "))
		    print("")

		    # process & output
		    if number_of_students > constants.MAX_STUDENT_NUMBER:
		        print("Too many students!")


		if __name__ == "__main__":
		    main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

		// if ... then example
		if numberOfStudents > 30 
		    puts "Too many students!"


  .. group-tab:: Swift

    .. code-block:: Swift

		// if ... then example
		if numberOfStudents > 30 {
		    print("Too many students!")
		}
