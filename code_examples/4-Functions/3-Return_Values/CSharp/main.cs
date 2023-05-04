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
    static int calculateArea(int length, int width) {
        // this function calculates the area of a rectangle

        // process
        int area = length * width;

        return area;
    }

    static int calculatePerimeter(int length, int width) {
        // this function calculates the perimeter of a rectangle
        
        // process
        int perimeter = 2 * (length + width);

        return perimeter;
    }
 
    public static void Main (string[] args) {
        // this function does the input and output
        int area = 0;
        int perimeter = 0;

        // input
        Console.Write("Enter the length of a rectangle (cm): ");
        int length = int.Parse(Console.ReadLine());
        Console.Write("Enter the width of a rectangle (cm): ");
        int width = int.Parse(Console.ReadLine());
        Console.WriteLine("");

        // call functions
        area = calculateArea(length, width);
        perimeter = calculatePerimeter(length, width);

        // output
        Console.WriteLine($"The area is {area} cm²");
        Console.WriteLine($"The perimeter is {perimeter} cm");

        Console.WriteLine("\nDone.");
    }
}
