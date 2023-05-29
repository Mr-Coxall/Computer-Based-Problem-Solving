// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program uses a 2D array

using System;

class Program
{
  static int SumOfNumbers(int[,] arrayOfNumbers)
  {
    // This function adds up all of the numbers in a 2D array

    int total = 0;
    int rows = arrayOfNumbers.GetLength(0);
    int columns = arrayOfNumbers.GetLength(1);

    // Loop through 2D array and add all numbers together
    for (int rowCounter = 0; rowCounter < rows; rowCounter++) {
      for (int columnCounter = 0; columnCounter < columns; columnCounter++) {
        total += arrayOfNumbers[rowCounter, columnCounter];
      }
    }

    return total;
  }

  static void Main()
  {
    // This function uses a 2D array
    const int rows = 7;
    const int columns = 5;
    int[,] number2DArray = new int[rows, columns];
    Random random = new Random();

    // Generate random numbers and populate the 2D array
    for (int row = 0; row < rows; row++)
    {
      for (int column = 0; column < columns; column++)
      {
        int aRandomNumber = random.Next(10);
        number2DArray[row, column] = aRandomNumber;
        Console.Write($"{aRandomNumber} ");
      }
      Console.WriteLine();
    }
    Console.WriteLine();

    // Call function
    int sumNumbers = SumOfNumbers(number2DArray);

    // Output
    Console.WriteLine($"The sum of all the numbers is: {sumNumbers}");

    Console.WriteLine("\nDone.");
  }
}
