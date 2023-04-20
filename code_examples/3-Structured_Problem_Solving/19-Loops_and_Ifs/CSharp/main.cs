/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program is the Fizz Buzz program
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function is the Fizz Buzz program
        for (int counter = 1; counter <= 100; counter++) {
            if (counter % 3 == 0 && counter % 5 == 0) {
                Console.WriteLine("Fizz-Buzz");
            } else if (counter % 3 == 0) {
                Console.WriteLine("Fizz");
            } else if (counter % 5 == 0) {
                Console.WriteLine("Buzz");
            } else {
                Console.WriteLine(counter);
            }
        }

        Console.WriteLine("\nDone.");
    }
}