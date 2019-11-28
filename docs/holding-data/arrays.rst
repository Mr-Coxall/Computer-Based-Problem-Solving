.. _arrays:

Arrays
======

An `array <https://en.wikipedia.org/wiki/Array_data_structure>`_ stores many pieces of data but in the same variable. For example I could save the marks for 5 students in an array like:

.. image:: ./images/array.png
   :alt: array
   :align: center

This array has 5 `elements <https://en.wikipedia.org/wiki/Element_(mathematics)>`_ (note that you usually start counting at 0 with arrays!) but they all have just one variable name (studentMarks). To refer to a specific mark you place the `index <https://en.wikipedia.org/wiki/Array_data_structure#Element_identifier_and_addressing_formulas>`_ of the mark after the variable name, usually in brackets. For example, you would refer to the mark of 84 as:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // array index
      studentMarks[3];

  .. group-tab:: Go

    .. code-block:: Go

      // array

  .. group-tab:: Java

    .. code-block:: Java

      // array index

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // array

  .. group-tab:: Python3

    .. code-block:: Python

      # list index (because python does not have arrays!)
      student_marks[3]

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // array

  .. group-tab:: Swift

    .. code-block:: Swift

      // array index


Arrays are an important programming concept because they allow a collection of related objects to be stored within a single variable. To declare an array, you usually must specify how many elements will be in the array during the declaration. Here we are declaring the variable studentMarks and allowing 5 items in it:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // declaring an array
      int studentMarks[5];

  .. group-tab:: Go

    .. code-block:: Go

      // array

  .. group-tab:: Java

    .. code-block:: Java

      // declaring an array

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // array

  .. group-tab:: Python3

    .. code-block:: Python

      # declaring a list (because python does not have arrays!)
      #   also, since it is a list, you do not specify how many elements are in it
      #   since it can shrink and grow as needed
      student_marks = []

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // array

  .. group-tab:: Swift

    .. code-block:: Swift

      // array

This will create our student mark array and ensure 5 student marks can be held. We often use a loop to either place infomation in an array or to get the infomation out of an array, since we need to do the same process for each element in the array. Here is an example:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
      //
      // Created by: Mr. Coxall
      // Created on: Dec 2019
      // This program uses an array

      #include <iostream>


      main() {
          // this function uses an array

          int studentMarks[5];
          int aSingleMark;

          // input
          for (int loop_counter = 0; loop_counter < 5; loop_counter++) {
              std::cout << "Enter a mark (percentage): ";
              std::cin >> aSingleMark;
              studentMarks[loop_counter] = aSingleMark;
          }
          std::cout << "";
          
          std::cout << "Here are the 5 marks:" << std::endl;
          
          for (int loop_counter; loop_counter < 5; loop_counter++) {
              std::cout << studentMarks[loop_counter] << "% ";
          }
          std::cout << "" << std::endl;
      }


  .. group-tab:: Go

    .. code-block:: Go

      // array

  .. group-tab:: Java

    .. code-block:: Java

      // array

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // array

  .. group-tab:: Python3

    .. code-block:: Python

      #!/usr/bin/env python3

      # Created by: Mr. Coxall
      # Created on: Dec 2019
      # This program uses an array

          
      def main():
          # this function uses an array
          
          student_marks = []
          
          # input
          for loop_counter in range(0, 5):
              a_single_mark = int(input("Enter a mark (percentage): "))
              student_marks.append(a_single_mark)
          print("")
              
          print("Here are the 5 marks:")
          
          for loop_counter in range(0, 5):
              print("{0}% ".format(student_marks[loop_counter]), end="")
              
          print("")


      if __name__ == "__main__":
          main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // array

  .. group-tab:: Swift

    .. code-block:: Swift

      // array

.. toctree::
   :maxdepth: 1
   :glob:

   Pass an Array as a Parameter <array-as-a-parameter>
   Pass an Array as a Return Values <array-as-a-return-value>
   Arrays with For ... Each Loops <arrays-and-for-each>
   2D Arrays <2d-arrays>