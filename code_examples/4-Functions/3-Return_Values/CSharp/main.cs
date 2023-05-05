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
    static float calculateArea(int radius) {
        // this function calculates the area of circle

        // process
        float area = Math.Pi * radius ** 2;


    }
 
    public static void Main (string[] args) {
        int radius;
        float area = 0.0;

        // input
        Console.Write("Enter the radius of a circle (cm): ");
        radius = int.Parse(Console.ReadLine());
        Console.WriteLine("");

        // call functions
        area = calculateArea(length, width);

        // output
        Console.WriteLine($"The area is {area} cm²");

        Console.WriteLine("\nDone.");
    }
}
