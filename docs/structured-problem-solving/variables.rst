.. _variables:

Variables
=========
 
A `variable <https://en.wikipedia.org/wiki/variable>`_ is a name that we use to represent a value that we want the computer to store in its memory for us. When solving problems, we often need to hold some valuable pieces of information we will use in our solution. From the “Input-Process-Output” model above, an example of variables we would be placing in storage is the input from the user. The pieces of information could be people’s names, important numbers or a total in a purchase. We use a name that means something to us (and hopefully the people that come after us and read our source code, commonly referred to as just code) so that we know right away when we read our code what it is holding. In math class you might be familiar with equations that involve variables like “x or y”. We would not name a variable x, if it is holding the number of students in class, we might call it numberOfStudents. This has much more meaning to us and other people that also look at our code. Some people are still tempted to use a variable name like "x", becasue they say it will save space. But once our code is converted to machine language, it does not matter what you called your varaible it will be converted to something that takes the same space. So be a "nice" programmer and always use meaningful varaible names

Depending on the type of programming language you are using, you might need to declare your variable (warn the computer we will be using a variable before we use it) before you use it in a program. Some programming languages do not enforce this rule, other do. Since you are new to programming, it is really good programming style to always declare a variable before using it, if that is possible. The process of declaring a variable is called a declaration statement.

In most programming languages you will have an identifier, which is the name you are giving your variable (ex. numberOfStudents) and the data type. The identifier will be the way that you refer to this piece of information latter in your program. The data type determines what kind of data can be stored in the variable, like a name, a number or a date. In the computer world you will come across data types like integer, character, string & boolean. It is always important that you ensure you select the right kind of data type for the particular data that it is going to hold. You would not use an integer to hold your name and vice versa, you would not use a string to hold your age. The following is a table of some common built in types from several different languages that you might use:

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

      // variable definition and initialization
      bool is_current = true;
      int age = 32;
      float area;
      string some_words = "Hello, Wordl!";

  .. group-tab:: Go

    .. code-block:: Go

      // variable definition and initialization
      var isCurrent bool = true
      var age int = 32
      var float32 area
      var someWords string = "Hello, World!"

  .. group-tab:: Java

    .. code-block:: Java

       // variable definition and initialization
       boolean isCurrent = true;
       int age = 32;
       float area;
       String someWords = "Hello, World!";

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      $ python3 --version
      $ pip3 --version

  .. group-tab:: Python3

    .. code-block:: Python

      $ python3 --version
      $ pip3 --version

  .. group-tab:: Ruby

    .. code-block:: Ruby

      C:\...>python3 --version
      C:\...>pip3 --version

  .. group-tab:: Swift

    .. code-block:: Swift

      C:\...>python3 --version
      C:\...>pip3 --version


// Declare and set a value for a constant
const pi float32 = 3.14