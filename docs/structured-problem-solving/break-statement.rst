.. _break-statement:

Break Statements
=============================

In Python, the break statement can alter the flow of a normal loop. Loops iterate over a block of code until test expression is false, but sometimes we wish to terminate the current iteration or even the whole loop without checking test expression. The break statement is used in these cases.

The break statement terminates the loop containing it. Control of the program flows to the statement immediately after the body of the loop. If break statement is inside a nested loop (loop inside another loop), break will terminate the innermost loop only. Note you will most likely need to place an if statement inside the loop, because if you just have a break statement all by itself inside a loop, it will always hit it the first time throguh and that is not really useful!

The do...while loop (in most computer programming languages) takes the generic form of:

| **WHILE** bolean expression
|     statement_1 
|     statement_2
|     ...
|     **IF** bolean expression **THEN**
|         **BREAK**
|     **ENDIF**
| **END**

| **FOR** (counter = 1 to 5)
|    statement(s)
| **END** 

| **FOR** (counter = 1 to 5)
|     statement_1 
|     statement_2
|     ...
|     **IF** bolean expression **THEN**
|         **BREAK**
|     **ENDIF**
| **END**

The flowchart for a Break statement will look like this:

.. image:: ./images/break-statement.png
   :alt: Break Statement
   :align: center 

The following code snippet is a break program:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// break statement

  .. group-tab:: Go

    .. code-block:: Go

      // break statement

  .. group-tab:: Java

    .. code-block:: Java

      // break statement


  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // break statement

  .. group-tab:: Python3

    .. code-block:: Python

		# break statement

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // break statement

  .. group-tab:: Swift

    .. code-block:: Swift

      // break statement
