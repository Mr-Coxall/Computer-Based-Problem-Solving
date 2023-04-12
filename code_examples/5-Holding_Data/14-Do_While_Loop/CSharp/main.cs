/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a do ... while loop
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a do ... while loop

        int counter = 0;
        int positiveInteger;

        // input
        Console.Write("Enter how many times to repeat: ");
        positiveInteger = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        // process & output
        do {
            Console.WriteLine(counter + " time(s) through the loop.");
            counter = counter + 1;
        } while (counter < positiveInteger);

        Console.WriteLine("\nDone.");
    }
}