/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a function by reference
*/

using System;

/*
 * The Program class
*/
class Program {
    static void AddOne(ref int someNumber) {
        // this function adds one to the parameter, by reference
        someNumber = someNumber + 1;
    }

    static void Main() {
        // this function uses a function by reference
        int someNumber;

        // input
        Console.Write("Enter a number: ");
        someNumber = Convert.ToInt32(Console.ReadLine());

        // process
        AddOne(ref someNumber);

        // output
        Console.WriteLine("The number plus one is: {0}", someNumber);

        Console.WriteLine("\nDone.");
    }
}
