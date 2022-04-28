.. _assignment-statements:

Assignment Statement
====================

Programs can have many variables. Usually information is gathered from the user, stored in variable, processed with other variables, saved back to one/some variable(s) and then returned to the user. Variables are changed or initially assigned a value by the use of an `assignment statement <https://en.wikipedia.org/wiki/Assignment_(computer_science)>`_. Assignment statement are usually read in reverse order from what we are use to in math class. A variable on the left side of the assignment statement will receive the value that is on the right hand side of the assignment statement. Note that different programming languages use different symbols to represent the assignment statement (for example in `Alpha <https://en.wikipedia.org/wiki/Alpha_(programming_language)>`_ it is” ←”, in `Pascal <https://en.wikipedia.org/wiki/Pascal_(programming_language)>`_ it is” :=”). No matter what the symbol is, you always read it as, “is assigned”. This is particularly important in many languages where the assignment symbol is an equal sign ( = ) and people are use to reading this as “is equal to”. In many of these language when you actually want to check for "equality" you then use (==). 

Here are a few examples of assignment statements:

.. tabs::
  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/3-Assingment_Statements/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 24-26
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/AssingmentStatements-CSharp#main.cs
      :width: 100

  .. group-tab:: C++
    .. code-block:: C++

      // assignment statement
      numberOfStudents = numberOfStudents + 5;
      width = 32;
      length = 10;
      areaOfRectangle = length * width;
      someWords = "Hello, Wordl!";

  .. group-tab:: Go
    .. code-block:: Go

      // assignment statement
      numberOfStudents = numberOfStudents + 5
      width = 32
      length = 10
      areaOfRectangle = length * width
      someWords = "Hello, Wordl!"

  .. group-tab:: Java
    .. code-block:: Java

      // assignment statement
      numberOfStudents = numberOfStudents + 5;
      width = 32;
      length = 10;
      areaOfRectangle = length * width;
      someWords = "Hello, Wordl!";

  .. group-tab:: JavaScript
    .. code-block:: JavaScript

      // assignment statement
      numberOfStudents = numberOfStudents + 5;
      width = 32;
      length = 10;
      areaOfRectangle = length * width;
      someWords = "Hello, Wordl!";

  .. group-tab:: Python3
    .. code-block:: Python

      # assignment statement
      number_of_students = number_of_students + 5
      width = 32
      length = 10
      area_of_rectangle = length * width
      some_words = "Hello, Wordl!"

  .. group-tab:: Ruby
    .. code-block:: Ruby

      # assignment statement
      number_of_students = number_of_students + 5
      width = 32
      length = 10
      area_of_rectangle = length * width
      some_words = "Hello, Wordl!"

  .. group-tab:: Swift
    .. code-block:: Swift

      // assignment statement
      numberOfStudents = numberOfStudents + 5
      width = 32
      length = 10
      areaOfRectangle = length * width
      someWords = "Hello, Wordl!"
