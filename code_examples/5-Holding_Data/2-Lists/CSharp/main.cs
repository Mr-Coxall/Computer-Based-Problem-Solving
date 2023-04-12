/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks for a runtime error
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function checks a student's grade

        // Input
        Console.Write("Enter an integer: ");
        string integerAsString = Console.ReadLine();

        // Process & Output
        try {
            int integerAsNumber = int.Parse(integerAsString);
            Console.WriteLine($"You entered: {integerAsNumber}.");
        } catch (FormatException e) {
            Console.WriteLine($"The error was: {e.Message}.");
        } finally {
            Console.WriteLine("Thanks for playing.");
        }

        Console.WriteLine("\nDone.");
    }
}