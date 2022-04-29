.. constants:

Constants
=================

There are times in a computer program where you have a value that you need the computer to save that does not change or changes very rarely. Some examples are the value of π (3.14…) and the `HST <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_ (the HST in Ontario is currently 13%, but it has changed once). When you have values like these, you do not want them to be saved as a variable (since they do not vary or change) but you place them in a `constant <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_.

Constants just like variables hold a particular value in memory for a programmer that will be used in the program. The difference is that the computer will not let the programmer change the value of a constant during the running of the program. This prevents errors from happening if the programmer accidently tries to change the value of a constant. It should always be declared, just as a variable is declared to warn the computer and people reading your code that it exists. Constants should be declared right before variables, so that they are prominent and easy to notice. Here are some examples of declaring constants:


.. tabs::
  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 14-17
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-CSharp#main.cs
      :width: 100
        
  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 10-13
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-CPP#main.cpp
      :width: 100

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Java/Main.java
        :language: Java
        :linenos:
        :emphasize-lines: 17-20, 22-25, 27-30
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-Java#Main.java
      :width: 100

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/JavaScript/index.js
        :language: javascript
        :linenos:
        :emphasize-lines: 7-10
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-JS#index.js
      :width: 100

  .. group-tab:: Python3
    .. code-block:: Python

      In Python we normally create a seperate file called constants.py and place all our constants in it
      
      constants.py

      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Python3/constants.py
        :language: python
        :linenos:
        :emphasize-lines: 7-10

      main.py

      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Python3/main.py
        :language: python
        :linenos:
        :emphasize-lines: 7
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-Python#main.py
      :width: 100

  .. group-tab:: Ruby
    .. code-block:: Ruby
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Ruby/main.rb
        :language: ruby
        :linenos:
        :emphasize-lines: 7-12
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-Ruby#main.rb
      :width: 100

  .. group-tab:: Swift
    .. code-block:: Swift
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/Swift/main.swift
        :language: swift
        :linenos:
        :emphasize-lines: 8-12
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-Swift#main.swift
      :width: 100
