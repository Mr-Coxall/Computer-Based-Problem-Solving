.. _array-as-a-parameter:

Array as a Parameter
====================

We know from the previous section that functions are a great way to ensure that your program is modular in its design. Any time a piece of code needs to be repeated more than once or twice, a function or might want to be used. When we use functions, we passed variables by value (making a copy) or by reference (passing the pointer); so that the function can do some process on the data. We normally pass variables like integers, strings, and floats but we have seen that you can pass any object, like an image. Since an array is just a variable that happens to hold several values and not just one, it also can be passed to a function, either by value or by reference.

There is some disagreement in the computer world whether it is wise to pass arrays, especially large ones with many values in them, by value. This is because you are making a complete copy of the array and it could take up a large quantity of memory. Other programmers do not like the idea of passing by reference if you do not want the original array to change, because there is always the risk that you or someone that comes after you, will change the array by accident. They argue that modern computers have so much memory these days (as compared to the “old days”) that the risk of changing the original array is not worth the potential memory usage. We will continue to pass variables into parameters by value, unless there is a really good reason that you want to pass the object in by reference.

To pass an array into a function, you declare the array inside the name of your function, just like you have been doing for regular variable, but you **do not place** any brackets or a number inside brackets, like when you were declaring your array normally. This is because the function does not know exactly how many elements the array will have. If you had to set it to a fixed amount, your function would not be very flexible. When the array is passed into the proc function, it will determine how many elements it has and an appropriate array variable with that many elements will be created. 

To declare an array as a parameter in a function, it would look like this:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // declare an array as a parameter in a function

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

      # declare an array as a parameter in a function

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // declare an array as a parameter in a function

  .. group-tab:: Swift

    .. code-block:: Swift

      // declare an array as a parameter in a function

To pass an array into this function as a parameter, it would look like this:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // pass an array into this function as a parameter

  .. group-tab:: Go

    .. code-block:: Go

      // pass an array into this function as a parameter

  .. group-tab:: Java

    .. code-block:: Java

      // pass an array into this function as a parameter

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // pass an array into this function as a parameter

  .. group-tab:: Python3

    .. code-block:: Python

      # pass an array into this function as a parameter

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // pass an array into this function as a parameter

  .. group-tab:: Swift

    .. code-block:: Swift

      // pass an array into this function as a parameter
