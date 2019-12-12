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

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // 2-D array

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




