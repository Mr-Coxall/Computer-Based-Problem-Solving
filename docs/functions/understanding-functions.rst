.. _understanding-functions:

Understanding Functions
=======================

A `Subroutine <https://en.wikipedia.org/wiki/Subroutine>`_ or what we will just refer to as a function is a block of code written to perform a specific task. We have actually been using functions all along our programming journey so far and you probably have not even notices. Many functions are built into most programming languages, like print for example. In python we have been placing our code in main(), which is a function. You can also create functions to do specific calculations, like converting temperature from Celsius to Fahrenheit and Kelvin for example. This type of conversion is very common and we might want to use it in another program (re-usability is very important in programming. Why re-invent the wheel, just use someone else's code).

Functions need to have two (2) seperate mechanisms to work correctly. You need a way to create the function in your program and you also need a way to then "call" the function and get the code inside of it to run. Although not normally needed for the computer, we usually place the function definition before we call the function, so that when people are actually reading the code they have seen the function and know what it will do *before* they see it being called.

This is a good template for keeping all the parts of your program organized:

1. comment header
2. global (to the file) constants
3. global (to the file) variables
4. functions
5. main body of code

Creating and Calling a  Function
--------------------------------

Each programming language has its own syntax to create and call a function. Here is an example:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // if ... then ... else example
      if (numberOfStudents == 30) {
          std::cout << "Exactly 30 students!"
      } else {
          std::cout << "Not 30 students."
      }

  .. group-tab:: Go

    .. code-block:: Go

      // if ... then ... else example
      if numberOfStudents == 30 {
          fmt.Println("Exactly 30 students!")
      } else {
          fmt.Println("Not 30 students")
      }

  .. group-tab:: Java

    .. code-block:: Java

      // if ... then ... else example
      if (numberOfStudents == 30) {
          print("Exactly 30 students!");
      } else {
          print("Not 30 students");
      }

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // if ... then ... else example
      if (numberOfStudents == 30) {
          print("Exactly 30 students!");
      } else {
          print("Not 30 students.");
      }

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
		    witdh = int(input("Enter the width of a rectangle (cm): "))
		    
		    # process
		    area = length * witdh
		    
		    # output
		    print("The area is {0} cm²".format(area))


		def calculate_perimeter():
		    # calculate perimeter
		    
		    # input
		    length = int(input("Enter the length of a rectangle (cm): "))
		    witdh = int(input("Enter the width of a rectangle (cm): "))
		    
		    # process
		    perimeter = 2 * (length + witdh)
		    
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

      // if ... then ... else example
      if numberOfStudents == 30
          puts "Exactly 30 students!"
      else
          puts "Not 30 students."


  .. group-tab:: Swift

    .. code-block:: Swift

      // if ... then ... else example
      if numberOfStudents == 30 {
          print("Exactly 30 students!")
      } else {
          print("Not 30 students.")
      }

