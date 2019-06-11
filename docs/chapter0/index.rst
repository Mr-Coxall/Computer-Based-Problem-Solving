.. _how-to:

=============
How-to Guides
=============

PREFACE

The goal of the book is to take students from the point of never having
done any formal programming and lead them first through a structured
method of problem solving (Input-Process-Output and Top-Down design)
and then into the early basics of Object Oriented Programming (or OOP).
If this book is used to teach a high school course in computer
programming, there are likely many other learning outcomes that students
are required to do that are not presented in this book. The focus of this
book is strictly on solving problems with computer programming.

.. code-block:: python

    # python
    for i in range(10):
        print(i)

.. code-block:: basic

    REM Basic
    FOR nCounter = 1 to 5
        PRINT "This is a loop"
    NEXT nCounter

.. code-block:: csharp

    // C#
    for (int i = 0; i < 10; i++)
    {
        Console.WriteLine("Value of i: {0}", i);
    }

.. code-block:: swift

    // Swift
    for n in 1...5 {
        print(n)
    }

.. code-block:: javascript

    // javascript
    var i;
    for (i = 0; i < cars.length; i++) {
        text += cars[i] + "<br>";
    }

.. code-block:: java

    // java
    for (int i=1;i<=10;i++) {  
        System.out.println(i);  
    } 

.. code-block:: lua

    -- Lua
    for i = 1, 5 do
        print(i)
    end


C{}DE


.. toctree::
   :maxdepth: 1
   :glob:

   Get started <get-started>
   Contribute to Toga <contribute>
