.. _default-values:

Default Values
==============

All of the functions that we have looked at to this point, you had to ensure that you were sending the exact same number of parameters to the function as it was expecting. To help us do this a good IDE will have "auto-complete" gives us a little pop out window to show us what should be passed over to the function.

Some built in functions we have been using can be accessed in multiple different ways though. For example in Python there is a built in function called random.randrange(). It is kind of like random.ranint() that we have used in the past. Here is the definition for random.ranint():

.. code-block:: python

	random.randint(a, b)
	// Return a random integer N such that a <= N <= b. Alias for randrange(a, b+1).

Notice that "a & b" are our starting and ending points. 

Here is the definition for random.randrange():

.. code-block:: python

	random.randrange(start, stop[, step])
	// The positional argument pattern matches that of range(). Keyword arguments should not be used because the function may use them in unexpected ways.

First off there is actually 2 seperate ways we could call this function:

- random.randrange(start, stop)
- random.randrange(start, stop, step)

It seems that step is "optional", which it is. By default, if you do not provide it, then python assumes the value is just 1. You can choose for example to place in 2, and then only even numbers will be chosen. Here is how we would define the function random.randrange() to get this optional parameter:

def randrange(start, stop, step = 1):

Notice that right in the declaration of the function, the "default optional parameter" is being set. If it is not provided as a parameter, the default value is just used. Each programming language has its own syntax to make this kind of optional parameter work. Here is an example:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// default function parameters


  .. group-tab:: Go

    .. code-block:: Go

      // default function parameters

  .. group-tab:: Java

    .. code-block:: Java

      // default function parameters

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // default function parameters

  .. group-tab:: Python3

    .. code-block:: Python

		#!/usr/bin/env python3

		# Created by : Mr. Coxall
		# Created on : October 2019
		# This program prints out your name, using default function parameters


		def full_name(first_name,last_name, middle_name = None):
		    # return the full NameError

		    full_name = first_name
		    if middle_name != None:
		        full_name = full_name + " " + middle_name[0]
		    full_name = full_name + " " + last_name

		    return full_name
		  
		def main():
		    # gets a users name and prints out their formal name
		    middle_name = None
		    
		    first_name = input("Enter your first name: ")
		    question = input("Do you have a middle name? (y/n): ")
		    if question.upper() == "Y" or question.upper() == "YES":
		        middle_name = input("Enter your middle name: ")
		    last_name = input("Enter your last name: ")

		    if middle_name != None:
		        name = full_name(first_name, last_name, middle_name)
		    else:
		        name = full_name(first_name, last_name)

		    print(name)

		if __name__ == "__main__":
		    main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // default function parameters


  .. group-tab:: Swift

    .. code-block:: Swift

      // default function parameters
