/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows declaring constants
*/

using System;

/*
 * The Program class
 * Contains all methods for performing basic constants usage
*/
class Program {
    public static void Main (string[] args) {
        // constant definition
        const int ROOM_NUMBER = 212;
        const float HST = 0.13f;
        const string COUNTRY = "Canada";

        Console.WriteLine("Room: " + ROOM_NUMBER);
        Console.WriteLine(HST + "%");
        Console.WriteLine(COUNTRY);

        Console.WriteLine("\nDone.");
    }
}
