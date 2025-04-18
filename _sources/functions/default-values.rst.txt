.. _default-values:

Default Values
==============

All of the functions that we have looked at to this point, you had to ensure that you were sending the exact same number of parameters to the function as it was expecting. To help us do this a good IDE will have, "auto-complete" giving us a little pop out window to show us what should be passed over to the function.

Some built in functions we have been using can be accessed in multiple different ways though. For example in Python there is a built in function called random.randrange(). It is kind of like random.ranint() that we have used in the past. Here is the definition for random.ranint():

.. code-block:: python

	random.randint(a, b)
	// Return a random integer N such that a <= N <= b. Alias for randrange(a, b+1).

Notice that "a & b" are our starting and ending points. 

Here is the definition for random.randrange():

.. code-block:: python

	random.randrange(start, stop[, step])
	// The positional argument pattern matches that of range(). 

First off there is actually 2 seperate ways we could call this function:

- random.randrange(start, stop)
- random.randrange(start, stop, step)

It seems that *step* is, "optional" which it is. By default, if you do not provide it, then python assumes the value is just 1. You can choose for example to place in a 2, and then only even numbers will be chosen. Here is how we would define the function random.randrange() to get this optional parameter:

.. code-block:: python

	def randrange(start, stop, step = 1):

Notice that right in the declaration of the function the, "default optional parameter" is being set. If it is not provided as a parameter, the default value is just used. Each programming language has its own syntax to make this kind of optional parameter work. Here is an example:

Code for Function with Default Values
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/C/main.c
        :language: C
        :linenos:

  .. group-tab:: C++
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 9-22, 49, 51

  .. group-tab:: C#
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 14-24, 49, 51

  .. group-tab:: Go
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/Go/main.c
        :language: go
        :linenos:

  .. group-tab:: Java
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 12-22, 47

  .. group-tab:: JavaScript
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 9-19, 37, 39

  .. group-tab:: Python
      .. literalinclude:: ../../code_examples/4-Functions/5-Default_Values/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 9-18, 34, 36

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/4-Functions/5-Default_Values/vhs.gif
    :alt: Code example output
    :align: left
