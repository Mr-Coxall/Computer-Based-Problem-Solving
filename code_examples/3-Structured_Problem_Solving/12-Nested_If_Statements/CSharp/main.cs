/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a compound boolean statement
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a compound boolean statement

        // input
        Console.Write("Enter term mark (as %): ");
        int termMark = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter project mark (as %): ");
        int projectMark = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        // process & output
        if (termMark >= 50 && projectMark >= 50) {
            Console.WriteLine("You passed the course.");
        } else {
            Console.WriteLine("You did not pass the course.");
        }

        Console.WriteLine("\nDone.");
    }
}