/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program prints out your name, using default function parameters
*/

using System;

/*
 * The Program class
 * Contains all methods for performing how local and global variables work
*/
class Program {

    static string FullName(string firstName, string lastName, string middleName = "") {
        // this function calculates the full name
        string fullName;

        if (middleName == "") {
            fullName = firstName + " " + lastName;
        } else {
            fullName = firstName + " " + middleName + " " + lastName;
        }
        return fullName;
    }

    public static void Main (string[] args) {
        // this function gets a users name and prints out their formal name
        string firstName;
        string question;
        string middleName = "";
        string lastName;
        string fullName;

        //input
        Console.Write("Enter your first name: ");
        firstName = Console.ReadLine();
        Console.Write("Do you have a middle name? (y/n): ");
        question = Console.ReadLine();
        if (question.ToUpper() == "Y" || question.ToUpper() == "YES") {
            Console.Write("Enter your middle name: ");
            middleName = Console.ReadLine();
        }
        Console.Write("Enter your last name: ");
        lastName = Console.ReadLine();
        Console.WriteLine();

        // process & output
        if (middleName != "") {
            fullName = FullName(firstName, lastName, middleName);
        } else {
            fullName = FullName(firstName, lastName);
        }
        Console.WriteLine($"Your formal name is {fullName}.");

        Console.WriteLine ("\nDone.");
    }
}
