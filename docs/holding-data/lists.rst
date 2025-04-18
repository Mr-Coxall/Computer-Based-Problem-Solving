.. _lists:

Lists
=====

Since in many programming languages, when you create an array the size must be set during coding so that the memory can be allocated when it is compiled, there is no way to dynamically change the size of an array during run time. This can be a huge disadvantage. One great example of wanting to have dynamic arrays is the classic video game, Space Invaders. If you imagine that all the lazer you shoot are held in an array, then how big should the array be? You have no idea how fast the user can press the "A" button. You can not tell how many lazers might be on the screen at any given time! If you cannot change the size of the array, what can we do, just making a "huge" array is wasteful and not really practical. Fortunately in many programming languages there is a data structure called a list.

A `List <https://en.wikipedia.org/wiki/List_(abstract_data_type)>`_ is similar to an array in that it is an ordered grouping of data. You still reference the items in the list using a positive integer index. The key difference is that the size of the list can shrink and grow, during run time as needed. As you need to add items, you just use an “Add” (or something similar like append). To remove an item you use "Remove" (or something similar like pop). The list usually has many useful methods for adding, sorting, clearing, finding the length an so on.

Here is an example of creating a list of items:

Code for Creating a List
^^^^^^^^^^^^^^^^^^^^^^^^
.. tabs::

  .. group-tab:: C
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/C/main.c
        :language: C

  .. group-tab:: C++
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/CPP/main.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 8, 12, 14, 19-23, 25, 30-33

  .. group-tab:: C#
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/CSharp/main.cs
        :language: C#
        :linenos:
        :emphasize-lines: 7, 15, 20-24, 26, 30-33

  .. group-tab:: Go
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/Go/main.go
        :language: go
        :linenos:
        :emphasize-lines: 10, 16, 21-25, 27, 31-33

  .. group-tab:: Java
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/Java/Main.java
        :language: java
        :linenos:
        :emphasize-lines: 10-11, 16, 22-26, 28, 32-34

  .. group-tab:: JavaScript
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/JavaScript/main.js
        :language: javascript
        :linenos:
        :emphasize-lines: 9, 14-17, 19, 23-25

  .. group-tab:: Python
      .. literalinclude:: ../../code_examples/5-Holding_Data/2-Lists/Python/main.py
        :language: python
        :linenos:
        :emphasize-lines: 13, 19-21, 23, 27-28

Example Output
^^^^^^^^^^^^^^
.. image:: ../../code_examples/5-Holding_Data/2-Lists/vhs.gif
   :alt: Code example output
   :align: left
