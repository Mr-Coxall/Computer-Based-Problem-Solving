.. _by-value-or-by-reference:

By Value or By Reference
========================

The second method of transferring information to a function is to pass it `By Reference <https://en.wikipedia.org/wiki/Evaluation_strategy#Call_by_reference>`_. This means that a pointer or *reference* to where the data is stored in memory is passed to the function and not a copy of the data. Since a pointer to where the data exists has been passed, if you actually change the value of the data in the function, the actual values of the data in the main program where the function was called from will also be changed. This can be very powerful but also **very dangerous**. Be careful using passing parameters By Reference, you might mistakenly change a value when that is not what you expect. The rule of thumb is that unless there is a really good reason to pass something By Reference, you never do and you always pass parameters By Value (even though it takes up more space in memory). 

Each language has its own syntax on how to declare you are going to accept a value by reference when you are declaring a function he is an example:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// declaring a function to accept parameter, by reference
		void addOne(int &someVariable) {
		    // someVariable is a reference variable

		    someVariable = someVariable + 1;
		}

  .. group-tab:: Go

    .. code-block:: Go

      // in Go, you can not pass a variable by reference

  .. group-tab:: Java

    .. code-block:: Java

      // in Java, you can not pass a variable by reference

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // in Java, you can not pass a variable by reference
      // You can pass a reference to an object and then change the object 

  .. group-tab:: Python3

    .. code-block:: Python

		# in Python you can not pass a value by reference, unless it is mutable
		# lists are mutable!
		def add_one(the_list):
		    # since lists are mutable, it can be changed

		    the_list[0] = the_list[0] + 1


  .. group-tab:: Ruby

    .. code-block:: Ruby

      // Ruby is pass by value


  .. group-tab:: Swift

    .. code-block:: Swift

		// declaring a function to accept parameter, by reference

		func addOne(inout someVaraible: Int) {
			someVaraible++
		}

		// ...
		var startValue = 1
		addOne(&startValue)
		println(startValue) // startValue = 2
