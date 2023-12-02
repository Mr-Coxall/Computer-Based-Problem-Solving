/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows declaring variables
*/

using System;

/*
 * The Program class
 * Contains all methods for performing basic variable usage
*/
class Program {
    public static void Main (string[] args) {
        // variable definition
        bool isCurrent = true;  // bool
        int age = 42;  // int
        float area = 42.42F;  // float
        string someWords = "Hello, World!";  // string

        Console.WriteLine(isCurrent);
        Console.WriteLine(age);
        Console.WriteLine(area);
        Console.WriteLine(someWords);

        Console.WriteLine("\nDone.");
    }
}
