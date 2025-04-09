.. constants:

Constants
=================

There are times in a computer program where you have a value that you need the computer to save that does not change or changes very rarely. Some examples are the value of π (3.14…) and the `HST <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_ (the HST in Ontario is currently 13%, but it has changed once). When you have values like these, you do not want them to be saved as a variable (since they do not vary or change) but you place them in a `constant <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_.

Constants just like variables hold a particular value in memory for a programmer that will be used in the program. The difference is that the computer will not let the programmer change the value of a constant during the running of the program. This prevents errors from happening if the programmer accidently tries to change the value of a constant. It should always be declared, just as a variable is declared to warn the computer and people reading your code that it exists. Constants should be declared right before variables, so that they are prominent and easy to notice. Here are some examples of declaring constants:


.. tabs::
  .. group-tab:: C
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/C/main.c
        :language: C
        :linenos:
        :emphasize-lines: 10-13
        
  .. group-tab:: C++
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 10-13

  .. group-tab:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 14-17

  .. group-tab:: Go
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 12-15

  .. group-tab:: Java
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Java/Main.java
        :language: Java
        :linenos:
        :emphasize-lines: 17-18, 20-21, 23-24

  .. group-tab:: JavaScript
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 7-10

  .. group-tab:: Python

      In Python we normally create a seperate file called constants.py and place all our constants in it. This is so that we can import the constants into our main.py file. This is a good way to organize your code and keep it clean.
      
      constants.py

      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Python/constants.py
        :language: python
        :linenos:
        :emphasize-lines: 8-11

      main.py

      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 8

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/vhs.gif
   :alt: Code example output
   :align: left
