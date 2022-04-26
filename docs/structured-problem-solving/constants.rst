.. constants:

Constants
=================
 
There are times in a computer program where you have a value that you need the computer to save that does not change or changes very rarely. Some examples are the value of π (3.14…) and the `HST <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_ (the HST in Ontario is currently 13%, but it has changed once). When you have values like these, you do not want them to be saved as a variable (since they do not vary or change) but you place them in a `constant <https://en.wikipedia.org/wiki/Harmonized_sales_tax>`_.

Constants just like variables hold a particular value in memory for a programmer that will be used in the program. The difference is that the computer will not let the programmer change the value of a constant during the running of the program. This prevents errors from happening if the programmer accidently tries to change the value of a constant. It should always be declared, just as a variable is declared to warn the computer and people reading your code that it exists. Constants should be declared right before variables, so that they are prominent and easy to notice. Here are some examples of declaring constants:


.. tabs::
  .. group-tab:: C#
    .. code-block:: C#
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/-Variables/CSharp/variables.cs
        :language: C#
        :linenos:
        :emphasize-lines: 15-18
    .. image:: ../images/replit.svg
      :target: https://replit.com/@MrCoxall1/variables-csharp#main.cs
      :width: 100
        
  .. group-tab:: C++
    .. code-block:: C++
      .. literalinclude:: ../../code_examples/3-Structured_Problem_Solving/2-Constants/CPP/constants.cpp
        :language: C++
        :linenos:
        :emphasize-lines: 11-14
    .. image:: ../images/replit.svg
      :target: https://replit.com/@mrcoxall/Constants-CPP#main.cpp
      :width: 100

  .. group-tab:: Go

    .. code-block:: Go

      // Created by: Mr. Coxall
      // Created on: June 2020
      // This program shows declaring constants
      
      package main
      	
      func main() {
          // constant definition
          const NUMBER_OF_LIVES int = 3
          const HST float32 = 0.13
      }


  .. group-tab:: Java

    .. code-block:: Java

      /**
       * Class Constants.
       * Created by: Mr. Coxall
       * Created on: June 2020
       * This program shows declaring constants
       */
      public class Constants {
        // constant definition
        private static int NUMBER_OF_LIVES = 3;
        private static double HST = 0.13;
        
        public static void main(String[] args) {
          // some code ...  
        }
      }


  .. group-tab:: JavaScript

    .. code-block:: JavaScript

      /**
       * Created by: Mr. Coxall
       * Created on: June 2020
       * This program shows declaring constants
       */
      
      // constant definition
      const NUMBER_OF_LIVES = 3;
      const HST = 0.13;


  .. group-tab:: Python3

    .. code-block:: Python

      --> file named: constants.py
      # constant definition
      # Note: in python ususally constants are declared in a seperate module
      #   In this example the module is called "constants" and would have the following lines of code:
      
      NUMBER_OF_LIVES = 3
      HST = 0.13

      --> file named: constants_example_code.py
      #!/usr/bin/env python3
      
      # Created by: Mr. Coxall
      # Created on: June 2020
      # This program shows declaring constants
      
      import constants
      
      
      def main():
          # then in the main program
          
          constants.NUMBER_OF_LIVES
          constants.HST
      
      
      if __name__ == "__main__":
          main()


  .. group-tab:: Ruby

    .. code-block:: Ruby

      #!/usr/bin/env ruby
      
      # Created by: Mr. Coxall
      # Created on: June 2020
      # This program shows declaring constants
      
      NUMBER_OF_LIVES = 3
      HST = 0.13


  .. group-tab:: Swift

    .. code-block:: Swift

      /**
       * Class Constants.
       * Created by: Mr. Coxall
       * Created on: June 2020
       * This program shows declaring constants
       */
      
      let numberOfLives = 3
      let HST = 0.13

