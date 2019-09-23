.. constants:

Constants
=================
 
There are times in a computer program where you have a value that you need the computer to save that does not change or changes very rarely. Some examples are the value of π (3.14…) and the `HST <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_ (the HST in Ontario is currently 13%, but it has changed once). When you have values like these, you do not want them to be saved as a variable (since they do not vary or change) but you place them in a `constant <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_.

Constants just like variables hold a particular value in memory for a programmer that will be used in the program. The difference is that the computer will not let the programmer change the value of a constant during the running of the program. This prevents errors from happening if the programmer accidently tries to change the value of a constant. It should always be declared, just as a variable is declared to warn the computer and people reading your code that it exists. Constants should be declared right before variables, so that they are prominent and easy to notice. Here are some examples of declaring constants:


.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // constant definition
      const int NUMBER_OF_LIVES = 3;
      const double HST = 0.13;

  .. group-tab:: Go

    .. code-block:: Go

      // constant definition
      const int NUMBER_OF_LIVES = 3
      const float32 HST = 0.13

  .. group-tab:: Java

    .. code-block:: Java

       // constant definition
       private static int NUMBER_OF_LIVES = 3;
       private static double HST = 0.13;

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

       // constant definition
       const NUMBER_OF_LIVES = 3;
       const HST = 0.13;

  .. group-tab:: Python3

    .. code-block:: Python

       # constant definition
       # Note: in python ususally constants are declared in a seperate module
       #   In this example the module is called "constants"
       NUMBER_OF_LIVES = 3
       HST = 0.13

       # then in main program
       constants.NUMBER_OF_LIVES
       constants.HST

  .. group-tab:: Ruby

    .. code-block:: Ruby

       // constant definition
       NUMBER_OF_LIVES = 3
       HST = 0.13

  .. group-tab:: Swift

    .. code-block:: Swift

       // constant definition
       let numberOfLives = 3
       let HST = 0.13
