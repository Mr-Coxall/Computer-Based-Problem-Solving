.. _select-case:

Select Case
===========

As you have seen from the If…Elseif…Elseif…Else statement, when there are many choices, the structure can be hard to follow. Some programming languages have an alternative structure when this happens. The Select Case or Switch Case statement is also a decision structure that is sometimes preferred because code might be easier to read and understand, by people. 

The Select Case structure takes a variable and then compares it to a list of expressions. The first expressions that is evaluated as “True” is executed and the remaining of the select case structure is skipped over, just like an If…ElseIf… statement. There are several different ways to create your expression. You can just use a value (a single digit for example), several digits, a range or having a regular expression (Is < 10). Just like the If structure, there is an optional “Else” that can be placed at the end as a catch all. If none of the expressions is evaluated to “True”, then the flow will go to the else. The general form of a Select…Case statement (in most computer programming languages) takes the generic form of:


| **SELECT**(variable) { 
      **CASE** valueOne 
          //statements 
      **CASE** valueTwo
          //statements
      **CASE** valueThree
          //statements
      ...      
      **ELSE**  //optional
         //statements

An example of what this would look like in a specific programming language is:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // select ...case example
        char choice;
        switch(choice) { 
            case 'Y' : 
                cout << "Yes"; 
                break; 
            case 'M' : 
                cout << "Maybe"; 
                break; 
            case 'N' : 
                cout << "No"; 
                break; 
            default: 
                cout << "Invalid response"; 
        }

  .. group-tab:: Go

    .. code-block:: Go

      // select ...case example

  .. group-tab:: Java

    .. code-block:: Java

      // select ...case example

  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      // select ...case example

  .. group-tab:: Python3

    .. code-block:: Python

      # select ...case example
        int month = 8;
        String monthString;
        switch (month) {
            case 1:  monthString = "January";
                     break;
            case 2:  monthString = "February";
                     break;
            case 3:  monthString = "March";
                     break;
            case 4:  monthString = "April";
                     break;
            case 5:  monthString = "May";
                     break;
            case 6:  monthString = "June";
                     break;
            case 7:  monthString = "July";
                     break;
            case 8:  monthString = "August";
                     break;
            case 9:  monthString = "September";
                     break;
            case 10: monthString = "October";
                     break;
            case 11: monthString = "November";
                     break;
            case 12: monthString = "December";
                     break;
            default: monthString = "Invalid month";
                     break;
        }

  .. group-tab:: Ruby

    .. code-block:: Ruby

      // select ...case example

  .. group-tab:: Swift

    .. code-block:: Swift

      // select ...case example


In the above examples, if the variable colourOfLight is red, yellow or green than the appropriate section of code is executed. If the variable does not equal any of these, then the last statement is executed, “No idea!” The above examples would look like the following in a flow-chart:

.. image:: ./images/select-case.png
   :alt: Select…Case flowchart
   :align: center 