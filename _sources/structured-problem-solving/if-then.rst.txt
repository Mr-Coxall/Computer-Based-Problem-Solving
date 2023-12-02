.. _if-then:

If…Then
=======

The If…Then structure is a conditional statement, or sometimes referred to as a decision structure. It is used to perform a section of code **if and only if** the condition is true. The condition is checked by using a Boolean statement. If the condition is not true (meaning false), then the section of code is not performed, it is just passed over. The form of an If…Then statement is:

| **IF** (Boolean expression) **THEN** 
|    statements to be performed ...
| **ENDIF**

The indentation (usually 2 or 4 spaces, **NOT A TAB**, except for languages like Go!), used in the If…Then statement is a coding convention used in almost every language. It is there to make the statement easier to read. It has no effect on how the code works (except in languages like python), and could be ignored; however, it is **REALLY BAD** programming style not to have them. You will also notice that some programming languages like to place the Boolean expression in brackets, while others do not. It is just style, but you should follow the language's conventions. 

Here is a problem that can be solved using an If…Then statement. I have a class that can only hold 30 students because that is how many chairs I have. Ask the user to enter a number of students and tell me if I have too many students for the number of chairs I have.

The top-down design will have decision logic in it. You **do not** use a diamond in a top-down design, you still only use rectangles. Here is what a top-down design might look like for this problem:

Top-Down Design for If…Then statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. image:: ./images/top-down-if-then.png
    :alt: Top-Down Design for If…Then statement
    :align: center

Remember from the section on flowcharts, the diamond shape represented decisions. The If…Then statement is the translation of a decision in a flowchart to code. Note that you **MUST** mark the, "Yes", and, "No", path, so that people can follow the flow of logic. The above examples would look like the following in a flowchart:

Flowchart for If…Then statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. image:: ./images/flowchart-if-then.png
    :alt: If…Then flowchart
    :align: center

You will also be using If…Then statements in pseudocode. The above problem looks like this in pseudocode. Note that you do indent when you are inside an If…Then statement in pseudocode. Also note that "**IF**", "**THEN**" and "**ENDIF**" are all **bold** and CAPS:

Pseudocode for If…Then statement
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
| **GET** number_of_students
| **IF** (number_of_students > 30) **THEN**
|     **SHOW** "Too many students!"
| **ENDIF**

In the code examples below, if the variable numberOfStudents (or number_of_students), happens to be a number that is greater than 30 (say 32), the next line of code is performed. If the variable is not greater than 30 (say it is exactly 30), then the next line of code is skipped over and **NOT** performed. Note that the number of chairs does not change often in my room, so I will use a constant to hold that value.

Code for If…Then statement
^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
    .. code-block:: C
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/C/main.c
        :language: C
        :linenos:
        :emphasize-lines: 19-22

  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 19-22

  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 22-25

  .. group-tab:: Go
    .. code-block:: Go
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 21-24

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 23-26

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 13-15

  .. group-tab:: Python
    .. code-block:: Python
      
      constants.py

      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/Python/constants.py
        :language: python
        :linenos:

      main.py

      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 19-21

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/3-Structured_Problem_Solving/6-If_Then/vhs.gif
    :alt: Code example output
    :align: left
