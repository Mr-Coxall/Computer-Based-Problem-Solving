.. _arrays-and-for-each:

Arrays and For ... Each Loops
=============================

If you think way back to when we did different types of looping structures, one of the methods to loop was using the For loop. It turnes out that since an array is a collection of variables held in a common structure, you can use a for loop with it. This type of loop, usually called a For ... Each loop is used when you have a collection of things and you wanted to iterate through each one of them, one at a time. From the above example of summing up all the values in an array, a For Each loop would look like the following function:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		template<size_t N>
		int SumOfNumbers(std::array<int, N> listOfNumbers) {
		    // this functions add up all the numbers in the list

		    int total = 0;
		    
		    // add up each element in an array, randomNumbers
		    for (int aSingleElement : listOfNumbers){
		        total += aSingleElement;
		    }

		    return total;
		}

  .. group-tab:: Go

    .. code-block:: Go

      // declare an array as a parameter in a function

  .. group-tab:: Java

    .. code-block:: Java

      // declare an array as a parameter in a function

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // declare an array as a parameter in a function

  .. group-tab:: Python3

    .. code-block:: Python

		def sum_of_numbers(list_of_numbers):
		    # this functions uses a for ... in loop

		    total = 0
		    
		    for counter in list_of_numbers:
		        total += counter

		    return total

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // declare an array as a parameter in a function

  .. group-tab:: Swift

    .. code-block:: Swift

      // declare an array as a parameter in a function
