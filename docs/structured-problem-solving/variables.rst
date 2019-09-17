.. _variables:

Variables
=========
 
A `variable <https://en.wikipedia.org/wiki/Variable_(computer_science)>`_ is a name that we use to represent a value that we want the computer to store in its memory for us. When solving problems, we often need to hold some valuable pieces of information we will use in our solution. From the “Input-Process-Output” model above, an example of variables we would be placing in storage is the input from the user. The pieces of information could be people’s names, important numbers or a total in a purchase. We use a name that means something to us (and hopefully the people that come after us and read our `source code <https://en.wikipedia.org/wiki/Source_code>`_, commonly referred to as just code) so that we know right away when we read our code what it is holding. In math class you might be familiar with equations that involve variables like “x or y”. We would not name a variable x, if it is holding the number of students in class, we might call it numberOfStudents or number_of_students (depending on the style guide for a particular language). This has much more meaning to us and other people that also look at our code. Some people are still tempted to use a variable name like "x", becasue they say it will save space. But once our code is converted to machine language, it does not matter what you called your varaible it will be converted to something that takes the same space. So be a "nice" programmer and always use meaningful varaible names

Depending on the type of programming language you are using, you might need to declare your variable (warn the computer we will be using a variable before we use it) before you use it in a program. Some programming languages do not enforce this rule, other do. Since you are new to programming, it is really good programming style to always declare a variable before using it, if that is possible. The process of declaring a variable is called a `declaration statement <https://en.wikipedia.org/wiki/Declaration_(computer_programming)>`_.

In most programming languages you will have an `identifier <https://en.wikipedia.org/wiki/Identifier#In_computer_science>`_, which is the name you are giving your variable (ex. numberOfStudents or number_of_students) and the `data type <https://en.wikipedia.org/wiki/Data_type>`_. The identifier will be the way that you refer to this piece of information latter in your program. The data type determines what kind of data can be stored in the variable, like a name, a number or a date. In the computer world you will come across data types like `integer <https://en.wikipedia.org/wiki/Integer>`_, `character <https://en.wikipedia.org/wiki/Character_%28computing%29>`_, `string <https://en.wikipedia.org/wiki/String_%28computer_science%29e>`_ & `boolean <https://en.wikipedia.org/wiki/Boolean_data_type>`_. It is always important that you ensure you select the right kind of data type for the particular data that it is going to hold. You would not use an integer to hold your name and vice versa, you would not use a string to hold your age. The following is a table of some common built in types from several different languages that you might use:

===============  ========================================
Variable Type    Type Range
Boolean          True or False (1 or 0)
Unsigned Byte    0 to 255
Signed Byte      -128 to 127
Character        A single character (like A or % or @)
String           Variable length number of characters
===============  ========================================

Variable declaration usually should be grouped at the beginning of a section of code (sub, procedure, function, method...), after the initial comments. A blank line follows the declaration and separates the declaration from the rest of your code. This makes it easy to see where the declaration starts and ends. Ensuring that your code is easy to read and understand is as important in computer science as it is in English. It is important to remember that your code has two audiences, the computer that needs to compile (or interprete) it so that the computer can run your program and even more important, you and everyone else that looks at your source code that are trying to figure out how your program works. Here are some examples of declaring a variable:


.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // variable definition
      bool is_current = true;
      int age = 32;
      float area;
      string some_words = "Hello, Wordl!";

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


// Declare and set a value for a constant
const pi float32 = 3.14