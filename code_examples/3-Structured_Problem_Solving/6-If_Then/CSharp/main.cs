/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks if there is over 30 students
*/

using System;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function checks if there is over 30 students
        const int MAX_STUDENT_NUMBER = 30;
        int numberOfStudents;

        // input
        Console.Write("Enter the number of students: ");
        numberOfStudents = Convert.ToInt32(Console.ReadLine());

        // process
        if (numberOfStudents > MAX_STUDENT_NUMBER) {
            // output
            Console.WriteLine("Too many students!");
        }

        Console.WriteLine("\nDone.");
    }
}
