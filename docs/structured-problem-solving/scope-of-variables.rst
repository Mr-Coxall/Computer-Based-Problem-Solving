.. _scope-of-variables:

Scope of Variables
==================

Where a variable is declared is important because it determines its `scope <https://en.wikipedia.org/wiki/Scope_(computer_science)>`_. The scope refers to where it is visible or can be used within a program. Usually you would declare a variable at the beginning of a function (for example a click event on a button or menu or the "main" function). Since it is declared at the beginning of a function, it can only be used within that funtion. Once the flow of your program exits this funtion, the variable is removed from memory (actually it is just `de-allocate <https://en.wikipedia.org/wiki/Garbage_%28computer_science%29>`_ most likely) and can no longer be used. This type of variable is referred to as a `local variable <https://en.wikipedia.org/wiki/Local_variable>`_. Any other function in your program can not use or refer to this variable. 

What if for some reason you needed a variable to be accessible to several different functions within a single program. In this case declaring it within a single function is no good. Another option is to declare the variable at the top of the form class or module, just before any function. If this is done then any function within that program can see and use this variable. This type of variable is called a `global variable <https://en.wikipedia.org/wiki/Global_variable>`_. Global variables should only be used when absolutely necessary; if only one function needs a variable, it should be declared within the function. This is good programming style and also saves computer memory. The following is an example where you can see variables with the same name, being used as global and local variables. Type it in and follow the variables by stepping through the program.

.. tabs::
  .. group-tab:: C
    .. code-block:: C
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/C/main.c
        :language: C
        :linenos:
        :emphasize-lines: 12-18, 20-26

  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 12-19, 21-28 

  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 17-23, 25-31

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 20-32, 34-45

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/JavaScript/index.js
        :language: javascript
        :linenos:
        :emphasize-lines: 9-15, 17-23

  .. group-tab:: Python
    .. code-block:: Python
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 12-18, 21-27

  .. group-tab:: Swift
    .. code-block:: Swift
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/4-Scope_of_Variables/Swift/main.swift
        :language: swift
        :linenos:
        :emphasize-lines: 18-21
