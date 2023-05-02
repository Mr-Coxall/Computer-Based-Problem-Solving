/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses user defined functions
*/

using System;

/*
 * The Program class
 * Contains all methods for performing basic variable usage
*/
class Program {
    static void calculateArea(int length, int width) {
        // this function calculates the area of a rectangle

        // process
        int area = length * width;

        // output
        Console.WriteLine($"The area is {area} cm²");
    }

    static void calculatePerimeter(int length, int width) {
        // this function calculates the perimeter of a rectangle
        
        // process
        int perimeter = 2 * (length + width);

        // output
        Console.WriteLine($"The perimeter is {perimeter} cm");
    }
 
    public static void Main (string[] args) {
        // input
        Console.Write("Enter the length of a rectangle (cm): ");
        int length = int.Parse(Console.ReadLine());
        Console.Write("Enter the width of a rectangle (cm): ");
        int width = int.Parse(Console.ReadLine());
        Console.WriteLine("");

        // call functions
        calculateArea(length, width);
        calculatePerimeter(length, width);

        Console.WriteLine("\nDone.");
    }
}
