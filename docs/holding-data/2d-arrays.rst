.. _2d-arrays:

2D Arrays
=========

All the arrays that we have used thus far have been to represent a collection of information. This is a very powerful tool and can save the programmer a lot of time and confusion when dealing with items that are somehow related to each other. Not all things can be represented with a single collection though. Several times we use a grid or `spreadsheet <https://en.wikipedia.org/wiki/Spreadsheet>`_ to keep information in rows and columns. This `matrix <https://en.wikipedia.org/wiki/Matrix_(math)>`_ of information can not be represented in a single array. In these situations we represent our data with a 2-dimensional (or `multi-dimensional array <https://en.wikipedia.org/wiki/Index_notation#Multi-dimensional_arrays>`_ ). 

A 2-D array can just be thought of an array of arrays.

.. image:: ./images/2-d_array.png
   :alt: 2D-array
   :align: center

We represent a given element with 2 indices now, instead of 1 when we
had a single dimension. Unlike in math class where you used the
`Cartesian plane <https://en.wikipedia.org/wiki/Cartesian_coordinate_system>`_, and moved in the X direction and then the Y direction,

.. image:: ./images/Cartesian-coordinate-system.png
   :alt: Cartesian-coordinate-system
   :height: 250 px
   :align: center

in computer science you move up and down in the rows first and then across to the column position. Thus if we want to refer to the element in the above array that has a value of 8, we would say, studentMarks(2, 1).

There are many applications of 2-D arrays, like a game board (tic-tac-toe), adventure games and business applications like spreadsheets.

Code for Creating and using a 2D Array
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
    .. code-block:: C
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/C/main.c
        :language: C

  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 12-26, 43

  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 13-24, 38

  .. group-tab:: Go
    .. code-block:: Go
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 15-25, 40

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 13-30, 57

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 8-20, 36

  .. group-tab:: Python
    .. code-block:: Python
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 13-23, 29, 36-43, 45

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/5-Holding_Data/1-Arrays/4-Array_2D/vhs.gif
   :alt: Code example output
   :align: left




.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
		//
		// Created by: Mr. Coxall
		// Created on: Dec 2019
		// This program uses a 2D array

		#include <iostream>
		#include <time.h>


		template <int rows, int cols>
		int sumOfNumbers(int (&passedIn2DList)[rows][cols]) {
		    // this function adds up all the elements in  a 2D array
		    
		    int total = 0;
		        
		    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
		        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
		            total += passedIn2DList[rowElement][columnElement];
		    }
		    
		    return total;
		}


		int main() {
		    // this function uses a 2D array

		    int aSingleRandomNumber = 0;
		    int sum = 0;
		    const int rows = 2;
		    const int columns = 5;
		    int a2DArray[rows][columns];
		    
		    srand(time(NULL));

		    // input
		    
		    // So, ...
		    //   In C++ you can't define array's size using variable.
		    //   this is why you see const int rows = 2; above, 
		    //   so the size of the array can never change

		    for(int rowElement = 0; rowElement < rows; rowElement++) {
		        for(int columnElement = 0; columnElement < columns; columnElement++ ) {
		            aSingleRandomNumber = (rand() % 10) + 1;
		            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
		            std::cout << aSingleRandomNumber << ", ";
		        }
		        std::cout << std::endl;
		    }

		    sum = sumOfNumbers(a2DArray);
		    std::cout << "The sum of all the numbers is: " << sum << std::endl;

		}



  .. group-tab:: Go

    .. code-block:: Go

      // arr2-D arrayay

  .. group-tab:: Java

    .. code-block:: Java

      // 2-D array

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // 2-D array

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by: Mr. Coxall
		# Created on: Dec 2019
		# This program uses a 2D array

		import random


		def sum_of_numbers(passed_in_2D_list):
		    # this function adds up all the elements in  a 2D array
		    
		    total = 0
		    for row_value in passed_in_2D_list:
		        for single_element in row_value:
		            total += single_element
		        
		    return total
		    

		def main():
		    # this function uses a 2D array
		    
		    a_2d_list = []
		    
		    # input
		    rows = int(input("How many row would you like: "))
		    columns = int(input("How many columns would you like: "))
		    
		    for loop_counter_rows in range(0, rows):
		        temp_column = []
		        for loop_counter_columns in range(0, columns):
		            a_random_number = random.randint(0,10)
		            temp_column.append(a_random_number)
		            print("{0} ".format(a_random_number), end="")
		        a_2d_list.append(temp_column)
		        print("")
		    
		    sum = sum_of_numbers(a_2d_list)
		    print("The sum of all the numbers is: {0} ".format(sum))


		if __name__ == "__main__":
		    main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // 2-D array

  .. group-tab:: Swift

    .. code-block:: Swift

      // 2-D array




