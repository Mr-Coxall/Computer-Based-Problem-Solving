.. _select-case:

Select Case
===========

As you have seen from the If…Elseif…Elseif…Else statement, when there are many choices, the structure can be hard to follow. Some programming languages have an alternative structure when this happens. The Select Case or Switch Case statement is also a decision structure that is sometimes preferred because code might be easier to read and understand, by people. 

The Select Case structure takes a variable and then compares it to a list of expressions. The first expressions that is evaluated as “True” is executed and the remaining of the select case structure is skipped over, just like an If…ElseIf… statement. There are several different ways to create your expression. You can just use a value (a single digit for example), several digits, a range or having a regular expression (Is < 10). Just like the If structure, there is an optional “Else” that can be placed at the end as a catch all. If none of the expressions is evaluated to “True”, then the flow will go to the else. The general form of a Select…Case statement (in most computer programming languages) takes the generic form of:

| **SELECT** (variable)  
|       **CASE** valueOne 
|           //statements 
|       **CASE** valueTwo
|           //statements
|       **CASE** valueThree
|           //statements
|       ...      
|       **ELSE**  //optional
|           //statements

An example of what this would look like in a specific programming language is:

.. tabs::

  .. group-tab:: C++

    .. code-block:: C++

      // Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
      //
      // Created by: Mr. Coxall
      // Created on: Sep 2019
      // This program checks your grade

      #include <iostream>

      int main() {
          // this function checks your grade
          char gradeLevel;  // a single character

          // input
          std::cout << "Enter grade mark as a single character(ex: A, B, ...): ";
          std::cin >> gradeLevel;

          // switch in C++ can not support strings, only numbers and char
          // also note you need the break in C++ or it will move to next
          // line in switch statement and might be true again
          switch (gradeLevel) {
              case 'A' :
                  std::cout << "Excellent!" << std::endl;
                  break;
              case 'B' :
                  std::cout << "Really good!" << std::endl;
                  break;
              case 'C' :
                  std::cout << "Well done" << std::endl;
                  break;
              case 'D' :
                  std::cout << "You passed" << std::endl;
                  break;
              case 'F' :
                  std::cout << "Better try again" << std::endl;
                  break;
              default :
                  std::cout << "Invalid grade" << std::endl;
          }
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
      # python does not actually have a select ... case structure

  .. group-tab:: Ruby

    .. code-block:: Ruby

      #!/usr/bin/env ruby

      # Created by: Mr. Coxall
      # Created on: Sep 2019
      # This program uses a try statement


      # input
      print "Enter grade mark as a single character(ex: A, B, ...): "
      gradeLevel = gets
      gradeLevel = gradeLevel.chomp

      # process & output
      case gradeLevel
          when "A"
              puts "Excellent!"
          when "B"
              puts "Really good!"
          when "C"
              puts "Well done"
          when "D"
              puts "You passed"
          when "F"
              puts "Better try again"
          else
              puts "Invalid grade"
      end


  .. group-tab:: Swift

    .. code-block:: Swift

      // select ...case example


In the above examples, if the variable colourOfLight is red, yellow or green than the appropriate section of code is executed. If the variable does not equal any of these, then the last statement is executed, “No idea!” The above examples would look like the following in a flow-chart:

.. image:: ./images/select-case.png
   :alt: Select…Case flowchart
   :align: center 