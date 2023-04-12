/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a nested if statement
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a nested if statement

        int cookiesSold;

        // input
        Console.Write("Enter the number of boxes of cookies you sold: ");
        cookiesSold = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        // process & output
        if (cookiesSold >= 20) {
            if (cookiesSold < 30) {
                Console.WriteLine("You get a small prize.");
            } else {
                Console.WriteLine("You get a large prize.");
            }
        } else {
            Console.WriteLine("No prize.");
        }

        Console.WriteLine("\nDone.");
    }
}