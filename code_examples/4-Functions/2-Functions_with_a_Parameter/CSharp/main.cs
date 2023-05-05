/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates the area of circle
*/

using System;

/*
 * The Program class
 * Contains all methods for performing basic variable usage
*/
class Program {
    static void calculateArea(int radius) {
        // this function calculates the area of circle

        // process
        int area = Math.Pi * radius ** 2;

        // output
        Console.WriteLine($"The area is {area} cm²");
    }
 
    public static void Main (string[] args) {
        // input
        Console.Write("Enter the radius of a circle (cm): ");
        int radius = int.Parse(Console.ReadLine());
        Console.WriteLine("");

        // call functions
        calculateArea(length, width);

        Console.WriteLine("\nDone.");
    }
}
