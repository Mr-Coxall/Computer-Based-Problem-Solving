/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a break statement
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a break statement

        int positiveInteger;

        // input
        Console.Write("Enter how many times to repeat: ");
        positiveInteger = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        // process & output
        for (int loopCounter = 0; loopCounter < positiveInteger; loopCounter++) {
            Console.WriteLine(loopCounter + " time(s) through the loop.");
            if (loopCounter >= 5) {
                break;
            }
        }

        Console.WriteLine("\nDone.");
    }
}