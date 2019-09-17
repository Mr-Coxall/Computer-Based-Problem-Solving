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

      // variable definition
      var isCurrent bool = true
      var age int = 32
      var float32 area
      var someWords string = "Hello, World!"

  .. group-tab:: Java

    .. code-block:: Java

       // variable definition
       boolean isCurrent = true;
       int age = 32;
       float area;
       String someWords = "Hello, World!";

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

       // variable definition
       let isCurrent = true;
       let age = 32;
       float area;
       let someWords = "Hello, World!";

  .. group-tab:: Python3

    .. code-block:: Python

       // variable definition
       is_current = True
       age = 32
       area = 32.45
       some_words = "Hello, World!";

  .. group-tab:: Ruby

    .. code-block:: Ruby

       # variable definition
       is_current = true
       age = 32
       area = 32.45
       some_words = "Hello, World!"

  .. group-tab:: Swift

    .. code-block:: Swift

      // variable definition
      var isCurrent: Bool = true
      var age: Int = 32
      var area: Float = 32.45
      var someWords: String = "Hello, World!"

