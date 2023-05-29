/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a list 
*/

using System;
using System.Collections.Generic;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a list
        List<string> words = new List<string>();
        string temp_word = "Go";

        Console.WriteLine("Please enter 1 word at a time. Enter STOP to end.");

        while (temp_word != "STOP") {
            Console.Write("Enter a word: ");
            temp_word = Console.ReadLine();
            words.Add(temp_word);
        }

        words.RemoveAt(words.Count - 1); // remove the "STOP" that was added
        Console.WriteLine();

        Console.WriteLine("Here are the words reversed:");
        while (words.Count > 0) {
            Console.WriteLine(words[words.Count - 1]);
            words.RemoveAt(words.Count - 1);
        }

        Console.WriteLine("\nDone.");
    }
}
