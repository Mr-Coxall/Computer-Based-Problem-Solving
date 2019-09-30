.. _if-then:

If…Then
=======

The If…Then structure is a conditional statement, or sometimes referred to as a decision structure. It is used to perform a section of code **if and only if** the condition is true. The condition is checked by using a Boolean statement. If the condition is not true (meaning false), then the section of code is not performed it is just passed over. The form of an If…Then statement is:

| **If** (boolean expression) **Then** 
|    Statements to be performed
| **End If**

The indentation (usually 4 spaces, **NOT A TAB**) used in the If…Then statement is a coding convention used in almost every language. It is there to make the statement easier to read. It has no effect on how the code works and could be ignored; however, it is **REALLY BAD** programming style not to have it. You will also notice that some programming languages like to place the Boolean expression in brackets, while others do not. It is just style, but you should follow the language's style. Here is what an If…Then statement looks like in specific programming languages:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

		// if ... then example
		if (numberOfStudents > 30) {
		    std::cout << "Too many students!";
		}

  .. group-tab:: Go

    .. code-block:: Go

		// if ... then example
		if numberOfStudents > 30 {
		    fmt.Println("Too many students!")
		}

  .. group-tab:: Java

    .. code-block:: Java

		// if ... then example
		if (numberOfStudents > 30) {
		    print("Too many students!");
		}

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

		// if ... then example
		if (numberOfStudents > 30) {
		    print("Too many students!");
		}

  .. group-tab:: Python3

    .. code-block:: Python

		# if ... then example
		if number_of_students > 30 :
		    print("Too many students!")

  .. group-tab:: Ruby

    .. code-block:: Ruby

		// if ... then example
		if numberOfStudents > 30 
		    puts "Too many students!"


  .. group-tab:: Swift

    .. code-block:: Swift

		// if ... then example
		if numberOfStudents > 30 {
		    print("Too many students!")
		}


In the above examples, if the variable numberOfStudents (or number_of_students) happens to be a number that is greater than 30 (say 32), the next line of code is performed (print("Too many Students!")). If the variable is not greater than 30 (say it is exactly 30), then the next line of code is skipped over and NOT performed. Remember from the section on flowcharts, the diamond shape represented decision. The If…Then statement is the translation of a decision in a flowchart to code. The above examples would look like the following in a flowchart:

.. image:: ./images/if-then.png
   :alt: If…Then flowchart
   :align: center 

You might also have to have a decision in your top-down design. You **do not** use a diamond in a top-down design, you still only use rectangles. Here is what a top-down design might look like for this problem:

.. image:: ./images/top-down-decision.png
   :alt: Top-Down Design for If…Then statement
   :align: center 

You will also be using If…Then statements in pseudo-code. 
