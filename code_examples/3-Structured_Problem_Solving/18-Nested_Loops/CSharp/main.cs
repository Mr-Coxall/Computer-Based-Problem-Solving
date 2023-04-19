/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a nested loop
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a nested loop

        // process & output
        for (int counter1 = 0; counter1 < 10; counter1++) {
            for (int counter2 = 0; counter2 < 10; counter2++) {
                Console.WriteLine("Odometer: " + counter1 + counter2);
            }
        }

        Console.WriteLine("\nDone.");
    }
}