.. _variables:

Variables
=========
 
A `variable <https://en.wikipedia.org/wiki/variable>`_ is a name that we use to represent a value that we want the computer to store in its memory for us. When solving problems, we often need to hold some valuable pieces of information we will use in our solution. From the “Input-Process-Output” model above, this would be the information we place in storage. The pieces of information could be people’s names, important numbers or a total in a purchase. We use a name that means something to us (and hopefully the people that come after us and read our source code, commonly referred to as just code) so that we know right away when we read our code what it is holding. In math class you might be familiar with equations that involve variables like “x or y”. We would not name a variable x, if it is holding the number of students in class, we might call it numberOfStudents. This has much more meaning to us and other people that also look at our code.

A variable should always be declared (warn the computer we will be using a variable before we use it) before we use it in a program. Some programming languages do not enforce this rule, other do. Since you are new to programming, it is really good programming style to always declare a variable before using it. The process of declaring a variable is called a declaration statement.

In most programming languages you will have an identifier, which is the name you are giving your variable (ex. numberOfStudents) and the data type. The identifier will be the way that you refer to this piece of information latter in your program. The data type determines what kind of data can be stored in the variable, like a name, a number or a date. In the computer world you will come across data types like integer, character, string & boolean. It is always important that you ensure you select the right kind of data type for the particular data that it is going to hold. You would not use an integer to hold your name and vice versa, you would not use a string to hold your age. The following is a table of some common built in types from VB and C# that you will be using:

===============  =========================
Variable Type    Type Range
Boolean          True or False (1 or 0)
Unsigned Byte    0 to 255
Signed Byte      -128 to 127
 
===============  =========================

Variable declaration usually should be grouped at the beginning of a section of code (sub, procedure, function, method...), after the initial comments. A blank line follows the declaration and separates the declaration from the rest of your code. This makes it easy to see where the declaration starts and ends. Ensuring that your code is easy to read and understand is as important in computer science as it is in English. It is important to remember that your code has two audiences, the computer that needs compile it so that the computer can run your program and even more important, you and everyone else that looks at your source code that are trying to figure out how your program works. Here are some examples of declaring a variable:


declaration code examples