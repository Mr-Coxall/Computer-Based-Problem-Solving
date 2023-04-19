/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a for loop
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a do ... while loop

        int positiveInteger;

        // input
        Console.Write("Enter how many times to repeat: ");
        positiveInteger = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        // process & output
        while (positiveInteger >= 0) {
            // yes, this is the exception on placing the counter at the top
            // if you did not, then there would be an infinit loop

            positiveInteger--;
            if (positiveInteger + 1 == 5) {
                continue;
            }
            Console.WriteLine("Current variable value: " + (positiveInteger + 1));
        }

        Console.WriteLine("\nDone.");
    }
}