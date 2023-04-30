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
    static void calculateArea() {
        // input
        Console.Write("Enter the length of a rectangle (cm): ");
        int length = int.Parse(Console.ReadLine());
        Console.Write("Enter the width of a rectangle (cm): ");
        int width = int.Parse(Console.ReadLine());

        // process
        int area = length * width;

        // output
        Console.WriteLine($"The area is {area} cm²\n");
    }

    static void calculatePerimeter() {
        // input
        Console.Write("Enter the length of a rectangle (cm): ");
        int length = int.Parse(Console.ReadLine());
        Console.Write("Enter the width of a rectangle (cm): ");
        int width = int.Parse(Console.ReadLine());

        // process
        int perimeter = 2 * (length + width);

        // output
        Console.WriteLine($"The perimeter is {perimeter} cm\n");
    }

    public static void Main (string[] args) {
        // call functions
        calculateArea();
        calculatePerimeter();

        Console.WriteLine("\nDone.");
    }
}
