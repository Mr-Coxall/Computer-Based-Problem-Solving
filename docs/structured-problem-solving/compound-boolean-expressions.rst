.. _compound-boolean-expressions:

Compound Boolean Expressions
============================

In some problems there are not just two different outcomes but more than two. If this 

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


In the above examples, if the variable colourOfLight is red, yellow or green than the appropriate section of code is executed. If the variable does not equal any of these, then the last statement is executed, “No idea!” The above examples would look like the following in a flow-chart:

.. image:: ./images/if-then-elseif-else.png
   :alt: If…Then…ElseIf…Else flowchart
   :align: center 