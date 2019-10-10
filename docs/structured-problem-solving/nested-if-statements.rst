.. _nested-if-statements:

Nested If Statements
====================

Sometimes a single if statement, even a long If…Then…ElseIf…ElseIf…Else is not a suitable structure to model your problem. Sometimes after one decision is made, there is another second decision that must follow. In these cases, if statements can be nested within if statements (or other structures as we will see later). Here is a problem:

The nested if statements (in most computer programming languages) takes the generic form of:

| **IF** expression1:
|    statement(s)
|    **IF** expressionA:
|        statement(s)
|    **ELSE**
|        Alternate statements to be performed
| **ELSE**
|     Alternate statements to be performed
| **ENDIF**

A school is going to sell chocolate bars to raise money. If a student sells 20 or more boxes, they get a prize. If they sell less than 30, they get a “small” prize. If they sell more than 30, they get a "large" prize. (Yes you could use an If…Then…ElseIf… statement.)

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