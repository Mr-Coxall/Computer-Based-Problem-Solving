// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses an array

using System;

class Program
{
    static void Main() {
        // this function uses an array

        int[] studentMarks = new int[5];
        int aSingleMark;

        // get length of array
        int arrayLength = studentMarks.Length;

        // input
        for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
            Console.Write("Enter a mark (percentage): ");
            aSingleMark = Convert.ToInt32(Console.ReadLine());
            studentMarks[loop_counter] = aSingleMark;
        }

        Console.WriteLine();
        Console.WriteLine("Here are the 5 marks:");

        for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
            Console.Write(studentMarks[loop_counter] + "% ");
        }

        Console.WriteLine();
        Console.WriteLine("\nDone.");
    }
}
