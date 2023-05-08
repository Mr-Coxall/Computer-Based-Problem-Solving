/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates the area of a rectangle
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
 
    public static void Main (string[] args) {
        // this function does the input and output
        int area = 0;

        // input
        Console.Write("Enter the length of a rectangle (cm): ");
        int lengthFromUser = int.Parse(Console.ReadLine());
        Console.Write("Enter the width of a rectangle (cm): ");
        int widthFromUser = int.Parse(Console.ReadLine());
        Console.WriteLine("");

        // call functions
        area = calculateArea(width: widthFromUser, length: lengthFromUser);

        // output
        Console.WriteLine($"The area is {area} cm²");

        Console.WriteLine("\nDone.");
    }
}
