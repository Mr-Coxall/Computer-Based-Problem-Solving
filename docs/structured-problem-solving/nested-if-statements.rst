.. _nested-if-statements:

Nested If Statements
====================

Sometimes a single if statement, even a long If…Then…ElseIf…ElseIf…Else is not a suitable structure to model your problem. Sometimes after one decision is made, there is another second decision that must follow. In these cases, if statements can be nested within if statements (or other structures as we will see later).

The nested if statements (in most computer programming languages) takes the generic form of:

| **IF** (boolean expression A) **THEN**
|    statement(s)
|    **IF** (boolean expression B) **THEN**
|        statement(s)
|    **ELSE**
|        Alternate statements to be performed
|    **ENDIF**
| **ELSE**
|     Alternate statements to be performed
| **ENDIF**

In this example problem a school is going to sell cookies to raise money. If a student sells 20 or more boxes, they get a prize. If they sell less than 30, they get a “small” prize. If they sell more than 30, they get a "large" prize. (Yes you could use an If…Then…ElseIf… statement.)

Top-Down Design for Nested If statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. image:: ./images/top-down-nested-if.png
   :alt: Top-Down Design for Nested If statement
   :align: center

Flowchart for Nested If statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. image:: ./images/flowchart-nested-if.png
   :alt: Nested If flowchart
   :align: center

Pseudocode for Nested If statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
| **GET** cookies_sold
| **IF** (cookies_sold < 20) **THEN**
|    **SHOW** "No prize!"
|    **IF** (cookies_sold > 30) **THEN**
|        **SHOW** "Big prize!"
|    **ELSE**
|        **SHOW** "Small prize!"
|    **ENDIF**
| **ENDIF**

Code for Nested If statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
    .. code-block:: C
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/C/main.c
        :language: C
        :linenos:
        :emphasize-lines: 20-28

  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 19-27

  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 21-29

  .. group-tab:: Go
    .. code-block:: Go
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 20-28

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 22-30

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 12-20

  .. group-tab:: Python
    .. code-block:: Python
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/12-Nested_If_Statements/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 22-28

Example Output
^^^^^^^^^^^^^^
.. code-block:: console

  @Mr-Coxall ➜ (master ✗) $ python ./main.py 
  Enter the color of the traffic light: red
  Stop!

  Done.
  @Mr-Coxall ➜ (master ✗) $ python ./main.py 
  Enter the color of the traffic light: yellow
  Slow down!

  Done.
  @Mr-Coxall ➜ (master ✗) $ python ./main.py 
  Enter the color of the traffic light: green
  Go!

  Done.
  @Mr-Coxall ➜ (master ✗) $ python ./main.py 
  Enter the color of the traffic light: blue
  Not a valid color.

  Done.





An example of what this would look like in a specific programming language is:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
      //
      // Created by: Mr. Coxall
      // Created on: Sep 2019
      // This program uses a nested if statement

      #include <iostream>
      #include <string>

      main() {
          // this function uses a nested if statement
          int cookiesSold;

          // input
          std::cout << "Enter the number of boxes of cookies you sold: ";
          std::cin >> cookiesSold;

          // process & output
          if (cookiesSold >= 20) {
              if (cookiesSold < 30) {
                  std::cout << "You get a small prize";
              } else {
                  std::cout << "You get a large prize";
              }
          } else{
              std::cout << "No prize";
          }
      }


  .. group-tab:: Go

    .. code-block:: Go

      // nested if example

  .. group-tab:: Java

    .. code-block:: Java

      // nested if example

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // nested if example

  .. group-tab:: Python3

    .. code-block:: Python

      #!/usr/bin/env python3

      # Created by: Mr. Coxall
      # Created on: Sep 2019
      # This program uses a nested if statement


      def main():
          # this function uses a nested if statement

          # input
          cookies_sold = int(input("Enter the number of boxes of cookies you sold: "))
          print("")

          # process & output
          if cookies_sold >= 20:
              if cookies_sold < 30:
                  print("You get a small prize")
              else:
                  print("You get a large prize")
          else:
              print("No prize")


      if __name__ == "__main__":
          main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // nested if example

  .. group-tab:: Swift

    .. code-block:: Swift

      // nested if example


The flowchart for this type of problem will look something like this:

.. image:: ./images/nested-if-statement.png
   :alt: Nested If Statement Flowchart
   :align: center 
