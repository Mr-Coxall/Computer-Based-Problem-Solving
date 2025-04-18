.. _functions-with-multiple-parameters:

Functions with Multiple Parameters
==================================

All of the functions that we have looked at to this point, there has been one (1) parameter passed into the function. This is not always the case. There might be cases where you need to pass in two (2) or more peices of infomation. Suppose you have a function that calculates the area of a rectangle. In this case unless you are only going to do squares, you will need a length and a width.

Fortunately you can pass multiple parameters into a function. The thing to remember is that, since you now have more than one (1) item, the order of the parameters is important, since this is how the computer is going to keep track of the different variables.

Since people are not always great at keeping things in order, many programming languages (`but not all <https://en.wikipedia.org/wiki/Named_parameter#:~:text=Named%20parameters%20are%20supported%20explicitly,Smalltalk%2C%20Swift%20and%20Visual%20Basic.>`_) let you pass multiple parameters to functions using "parameteres by keyword". This means that you actually give each parameter a name and then refer to this name when you are passing the values to the function, so there is no confusion about what value is going where.

In the example below, I have a function that can calculate the area of a rectangle. Is is important to keep all two (2) parameters organzied, or you will not get the correct answer. To do this each parameter will use named parameters (if possible):

Code for Function with Multiple Parameters
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/C/main.c
        :language: C
        :linenos:
        :emphasize-lines: 9-16, 32

  .. group-tab:: C++
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 10-17, 34

  .. group-tab:: C#
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 13-20, 34

  .. group-tab:: Go
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 13-20, 35

  .. group-tab:: Java
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 12-22, 49

  .. group-tab:: JavaScript
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 11-19, 27

  .. group-tab:: Python
      .. literalinclude:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 9-16, 28

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/4-Functions/4-Functions_with_Multiple_Parameters/vhs.gif
    :alt: Code example output
    :align: left
