.. _holding-data:

============
Holding Data
============

.. image:: ../images/cartoons/the_art_of_bug_fixing.png
   :height: 500 px
   :alt: cartoon
   :align: center

Up to this point, every time we saved a piece of information (a number, string, an object …) into a variable, it has always been a single piece of information and we have saved it into one single variable. This makes good sense for many things but sometimes it is very inconvenient. If I asked you to save the final mark for every student in this class, we would have to create a variable for every student in this class to hold their mark. Recreating these variables over and over again, should be the clue that there is a better way of doing this. Another problem is the program would only be useful for a class that had that exact same number of students, not very likely to occur often. To save information like this we should be using an `array <https://en.wikipedia.org/wiki/Array_data_structure>`_.

.. toctree::
   :maxdepth: 1
   :glob:

   Using Array <understanding-functions>
      Using Array <understanding-functions>
      Pass an Array as a Parameter <functions-with-a-parameter>
      Return Values <return-values>
      Arrays with For ... Each Loops <functions-with-multiple-parameters>
      2D Arrays <by-value-or-by-reference>
   Lists <default-values>
   Tuple
   Dictionaries <default-values>
   Sets <default-values>
   Stacks <default-values>
   Queue
   Heap
   Graphs
   Binary Trees 