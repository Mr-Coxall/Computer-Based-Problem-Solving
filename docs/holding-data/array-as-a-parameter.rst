.. _array-as-a-parameter:

Array as a Parameter
====================

We know from the previous section that functions are a great way to ensure that your program is modular in its design. Any time a piece of code needs to be repeated more than once or twice, a function might want to be used. When we use functions, we passed variables by value (making a copy) or by reference (passing the pointer); so that the function can do some process on the data. We normally pass variables like integers, strings, and floats but we have seen that you can pass any object, like an image. Since an array is just a variable that happens to hold several values and not just one, it also can be passed to a function, either by value or by reference (depending what the language will allow.).

There is some disagreement in the computer world whether it is wise to pass arrays, especially large ones with many values in them, by value. This is because you are making a complete copy of the array and it could take up a large quantity of memory. Other programmers do not like the idea of passing by reference if you do not want the original array to change, because there is always the risk that you or someone that comes after you, will change the array by accident. They argue that modern computers have so much memory these days (as compared to the “old days”) that the risk of changing the original array is not worth the potential memory usage. We will continue to pass variables into parameters by value, unless there is a really good reason that you want to pass the object in by reference (or i the programming language only lets you pass it in my reference).

To pass an array into a function, you declare the array inside the name of your function, just like you have been doing for regular variable, but you **do not place** any brackets or a number inside brackets, like when you were declaring your array normally. This is because the function does not know exactly how many elements the array will have. If you had to set it to a fixed amount, your function would not be very flexible. When the array is passed into the function, it will determine how many elements it has and an appropriate array variable with that many elements will be created. 

To declare an array as a parameter in a function, it would look like this:

.. tabs::

  .. group-tab:: C

    .. code-block:: C

      // declare an array as a parameter in a function
      template<size_t N>
      int SumOfNumbers(std::array<int, N> listOfNumbers) {

  .. group-tab:: C++

    .. code-block:: C++

      // declare an array as a parameter in a function
      template<size_t N>
      int SumOfNumbers(std::array<int, N> listOfNumbers) {

  .. group-tab:: Go

    .. code-block:: Go

      // declare an array as a parameter in a function

  .. group-tab:: Java

    .. code-block:: Java

      // declare an array as a parameter in a function

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // declare an array as a parameter in a function

  .. group-tab:: Python

    .. code-block:: Python

      # declare an array as a parameter in a function
      # note: it just looks like a normal variable
      def sum_of_numbers(list_of_numbers):

To pass an array into this function as a parameter, it would look like this:

.. tabs::

  .. group-tab:: C

    .. code-block:: C

      // pass an array into this function as a parameter
      std::array<int, 10> randomNumbers;
    
      sum = SumOfNumbers(randomNumbers);

    .. code-block:: C++

      // pass an array into this function as a parameter
      std::array<int, 10> randomNumbers;
    
      sum = SumOfNumbers(randomNumbers);

  .. group-tab:: Go

    .. code-block:: Go

      // pass an array into this function as a parameter

  .. group-tab:: Java

    .. code-block:: Java

      // pass an array into this function as a parameter

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // pass an array into this function as a parameter

  .. group-tab:: Python

    .. code-block:: Python

      # pass an array into this function as a parameter
      random_numbers = []

      sum = sum_of_numbers(random_numbers)

Here is a complete example of creating an array and passing it as a parameter to a function:


Code for Creating an Array
^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
    .. code-block:: C
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/C/main.c
        :language: C
        :linenos:
        :emphasize-lines: 12, 16, 19-23, 27-29

  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 13, 17, 20-24, 28-30

  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 14, 18, 21-25, 30-32

  .. group-tab:: Go
    .. code-block:: Go
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 16, 19, 22-26, 32-34

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 16, 20, 24-28, 32-34

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 8, 12, 15-18, 23-25

  .. group-tab:: Python
    .. code-block:: Python
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 12, 15-17, 22-23

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/5-Holding_Data/1-Arrays/1-Array_as_a_Parameter/vhs.gif
   :alt: Code example output
   :align: left



.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
      //
      // Created by: Mr. Coxall
      // Created on: Dec 2019
      // This program uses an array as a parameter

      #include <iostream>
      #include <time.h>
      #include <array>


      template<size_t N>
      int SumOfNumbers(std::array<int, N> listOfNumbers) {
          // this functions add up all the numbers in the list

          int total = 0;
          
          for (int counter = 0; counter < listOfNumbers.size(); counter++) {
              total += listOfNumbers[counter];
          }

          return total;
      }

      main() {
          // this function uses an array

          std::array<int, 10> randomNumbers;
          int aSingleRandomNumber = 0;
          int sum = 0;
          
          srand(time(NULL));

          // input
          std::cout << "The numbers are: ";
          for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
              aSingleRandomNumber = (rand() % 10) + 1;
              randomNumbers[loop_counter] = aSingleRandomNumber;
              std::cout << aSingleRandomNumber << ", ";
          }
          std::cout << " " << std::endl;
          
          sum = SumOfNumbers(randomNumbers);
          
          std::cout << "The sum of all the numbers is: " << sum << std::endl;
      }


  .. group-tab:: Go

    .. code-block:: Go

      // pass an array into this function as a parameter

  .. group-tab:: Java

    .. code-block:: Java

      // pass an array into this function as a parameter

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // pass an array into this function as a parameter

  .. group-tab:: Python3

    .. code-block:: Python

      #!/usr/bin/env python3

      # Created by: Mr. Coxall
      # Created on: Dec 2019
      # This program uses a list as a parameter

      import random

          
      def sum_of_numbers(list_of_numbers):
          # this functions add up all the numbers in the list

          total = 0
          
          for counter in range (0, len(list_of_numbers)):
              total += list_of_numbers[counter]

          return total

      def main():
          # this function uses a list
          
          random_numbers = []
          sum = 0
          
          # input
          print("The numbers are ")
          for loop_counter in range(0, 9):
              a_single_number = random.randint(0,10)
              random_numbers.append(a_single_number)
              print("{0}, ".format(a_single_number), end="")
          print("")
          
          sum = sum_of_numbers(random_numbers)
          
          print("The sum of all the numbers is: {0} ".format(sum))
              


      if __name__ == "__main__":
          main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // pass an array into this function as a parameter

  .. group-tab:: Swift

    .. code-block:: Swift

      // pass an array into this function as a parameter
