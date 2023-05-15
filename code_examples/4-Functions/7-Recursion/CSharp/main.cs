/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates factorial
*/

using System;

/*
 * The Program class
*/
class Program {
        // recursive function calculating factorial
        static int Factorial(int number) {
            if (number == 1) {
                return 1;
            }
            else {
                return number * Factorial(number - 1);
            }
        }

    static void Main() {
        // this function gets user input
        int userInputInt;

        // input
        Console.Write("Enter a positive integer: ");
        userInputInt = int.Parse(Console.ReadLine());

        if (userInputInt < 0) {
            Console.WriteLine("That was not a positive integer.");
        } else {
            // call function
            int factorialAnswer = Factorial(userInputInt);
            Console.WriteLine($"The factorial of {userInputInt} is {factorialAnswer}");
        }

        Console.WriteLine("\nDone.");
    }
}
