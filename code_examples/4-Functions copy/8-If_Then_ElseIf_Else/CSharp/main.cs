/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks a traffic light
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function checks a traffic light
        string lightColor;

        // input
        Console.Write("Enter the color of the traffic light: ");
        lightColor = Console.ReadLine();

        // process and output
        if (lightColor == "red") {
            Console.WriteLine("Stop!");
        } else if (lightColor == "yellow") {
            Console.WriteLine("Slow down!");
        } else if (lightColor == "green") {
            Console.WriteLine("Go!");
        } else {
            Console.WriteLine("Not a valid color.");
        }

        Console.WriteLine("\nDone.");
    }
}
