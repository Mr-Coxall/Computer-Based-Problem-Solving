.. _recursion:

Recursion
=========

Up to this point we have been focusing on a structured approach to programming. We have ensured that we can easily follow the flow of a
program, even if we create functions to modulate out components that we use often. There is one more interesting way to solve programs, that uses modularity but in a strange method. We have become accustomed to calling a function, doing the action and then returning to the flow of the program. But what would happen if in a function we called the *exact same function?* If we do this it is called `recursion <https://en.wikipedia.org/wiki/Recursion_(computer_science)>`_. 

The first question we need to ask ourselves is can we legally do this. This is a really good question, since in some programming languages, recursion is actually illegal and you will not be able to compile you program. Most modern languages actually let you do this. The second question you might be asking is, would I end up in an infinite loop? The answer is you might, just like you could in any looping structure if you do not write the code correctly. But if you write the code “properly” you will not end up in an infinite loop. 

By using recursion, what you are trying to do is simplify out the problem to something very trivial to program. Remember that in our problem solving model, trying to simplify out the problem was really important. Here is an example program that reverses the characters in a string, an easy enough
task with a loop but by using recursion, it become even easier.

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// recursive function

  .. group-tab:: Go

    .. code-block:: Go

      // recursive function

  .. group-tab:: Java

    .. code-block:: Java

      // recursive function

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // recursive function

  .. group-tab:: Python3

    .. code-block:: Python

		# recursive function

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // recursive function


  .. group-tab:: Swift

    .. code-block:: Swift

      // recursive function
