/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows assingment statements
*/

using System;

/*
 * The Program class
 * Contains all methods for performing basic variable usage
*/
class Program {
    public static void Main (string[] args) {
        // variable definition
        int numberOfStudents = 2;
        float width = 32.5F;
        float length = 10.0F;
        float areaOfRectangle = 0F;
        string someWords1 = "Hello";
        string someWords2 = "World!";
        string helloWorld = null;

        // using assignment statements
        numberOfStudents = numberOfStudents + 5;
        areaOfRectangle = length * width;
        helloWorld = someWords1 + ", " + someWords2; 

        // output
        Console.WriteLine ("The number of students is: " + numberOfStudents);
        Console.WriteLine ("The area of a rectangle is: " + areaOfRectangle + " cm²");
        Console.WriteLine (helloWorld);

        Console.WriteLine ("\nDone.");
    }
}
