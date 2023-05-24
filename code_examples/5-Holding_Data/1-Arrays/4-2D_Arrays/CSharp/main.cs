/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses an array as a parameter
*/

using System;

/*
 * The Program class
 * Contains all methods for performing basic variable usage
*/
class Program {
    static int SumOfNumbers(int[] arrayOfNumbers) {
        int total = 0;
        int lengthOfArray = arrayOfNumbers.Length;

        for (int counter = 0; counter < lengthOfArray; counter++) {
            total += arrayOfNumbers[counter];
        }

        return total;
    }
 
    public static void Main (string[] args) {
        int[] numberList = new int[10];
        Random rand = new Random();

        // input
        for (int counter = 0; counter < 10; counter++) {
            numberList[counter] = rand.Next(1, 100);
            Console.WriteLine("The random number is: {0}", numberList[counter]);
        }
        Console.WriteLine();

        // call function
        int sum = SumOfNumbers(numberList);

        // output
        Console.WriteLine("The sum of all the numbers is: {0}", sum);

        Console.WriteLine("\nDone.");
    }
}
