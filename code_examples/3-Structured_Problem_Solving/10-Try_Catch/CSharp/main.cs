/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks a student's grade
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function checks a student's grade

        // create Scanner object for user input
        Console.Write("Enter your grade: ");
        string grade = Console.ReadLine();

        // process & output
        switch (grade.ToUpper()) {
            case "A":
                Console.WriteLine("Excellent!");
                break;
            case "B":
                Console.WriteLine("Good job!");
                break;
            case "C":
                Console.WriteLine("Average.");
                break;
            case "D":
                Console.WriteLine("Poor.");
                break;
            case "F":
                Console.WriteLine("Fail.");
                break;
            default:
                Console.WriteLine("Invalid grade.");
                break;
        }

        Console.WriteLine("\nDone.");
    }
}
