/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates total from subtotal and tax
*/

using System;

/*
 * The Program class
 * Contains all methods for performing how local and global variables work
*/
class Program {

    public static void Main (string[] args) {
        // this function calculates total from subtotal and tax
        const float HST = 0.13f;
        float tax;
        float subTotal;
        float total;

        //input
        Console.Write("Enter the subtotal: $");
        subTotal = float.Parse(Console.ReadLine());

        // process
        tax = + subTotal * HST;
        total = subTotal + tax;
        
        // output
        Console.WriteLine("\n");
        Console.WriteLine("The HST is: ${0:0.00}.", tax);
        Console.WriteLine("The total cost is: ${0:0.00}.", total);

        Console.WriteLine ("\nDone.");
    }
}
