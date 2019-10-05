.. _nested-if-statements:

Nested If Statements
====================

Sometimes a single if statement, even a long If…Then…ElseIf…ElseIf…Else is not a suitable structure to model your problem. Sometimes after one decision is made, there is another second decision that must follow. In these cases, if statements can be nested within if statements (or other structures as we will see later). Here is a problem:

A school is going to sell chocolate bars to raise money. If a student sells over 20 boxes, they get a prize. If they sell 20 to 10, they get a “small” prize. If they sell less than 10, they get honorable mention. Create a program that will let the user input the number of boxes sold and then state what the reward would be and use nested if statements.
The flowchart for this type of problem will look something like this:





. The Select…Case statement (in most computer programming languages) takes the generic form of:


| **IF** (boolean expression #1) **THEN** 
|    First potential statement to be performed
| **ELSEIF** (boolean expression #2) **THEN** 
|    Second potential statement to be performed
| **ELSEIF** (boolean expression #3) **THEN** 
|    Third potential statement to be performed
| ...
| **ELSEIF** (boolean expression #n) **THEN** 
|    Nth potential statement to be performed
| **ELSE**
|    Alternate statements to be performed
| **ENDIF**

An example of what this would look like in a specific programming language is:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // if ... then ... elseif ... else example
      if (colourOfLight == “red”) {
          std::cout << "Stop!";
      } else if (colourOfLight == “yellow") {
          std::cout << "Slow Down.";
      } else if (colourOfLight == green") {
          std::cout << "Go, if all clear.";
      } else {
          std::cout << "No idea!";
      }

  .. group-tab:: Go

    .. code-block:: Go

      // if ... then ... elseif ... else example

  .. group-tab:: Java

    .. code-block:: Java

      // if ... then ... elseif ... else example

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // if ... then ... elseif ... else example

  .. group-tab:: Python3

    .. code-block:: Python

      # if ... then ... elseif ... else example
      if colour_of_light == “red”) {
          print("Stop!")
      } elif (colour_of_light == “yellow") {
          print("Slow Down.")
      } elif (colour_of_light == green") {
          print("Go, if all clear.")
      } else {
          print("No idea!")
      }

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // if ... then ... elseif ... else example

  .. group-tab:: Swift

    .. code-block:: Swift

      // if ... then ... elseif ... else example


Note: notice how the second if statement is indented within the first one. This is because each if statement is a “structure” and gets indented, within the structure it is already in.

.. image:: ./images/nested-if-statement.png
   :alt: Nested If Statement Flowchart
   :align: center 