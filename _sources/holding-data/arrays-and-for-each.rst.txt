.. _arrays-and-for-each:

Arrays and For ... Each Loops
=============================

If you think way back to when we did different types of looping structures, one of the methods to loop was using the For loop. The purpose of the for each loop was that the loop would manage counting for us. It turns out that since an array is a collection of variables held in a common structure, you can use a for loop with it. This type of loop, usually called a For ... Each loop, is used when you have a collection of things and you wanted to iterate through each one of them, one at a time. Since an array is a collection of variables, the For ... Each loop takes one element out of the array at a time and lets you do something with it. The loop will continue until it has gone through all the elements in the array. The For ... Each loop does not need an iterator variable, since the loop manages that counting for you.

From the previous example of summing up all the values in an array, a For Each loop would look like the following:

Code for Using a For ... Each loop with an Array
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
    .. code-block:: C
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/C/main.c
        :language: C

  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 12-26, 43

  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 13-24, 38

  .. group-tab:: Go
    .. code-block:: Go
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 15-25, 40

  .. group-tab:: Java
    .. code-block:: Java
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 13-30, 57

  .. group-tab:: JavaScript
    .. code-block:: JavaScript
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 8-20, 36

  .. group-tab:: Python
    .. code-block:: Python
      .. literalinclude:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 13-22, 39

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/5-Holding_Data/1-Arrays/3-Arrays_and_For_Each/vhs.gif
   :alt: Code example output
   :align: left
