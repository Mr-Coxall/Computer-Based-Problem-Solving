/*
 * This program uses an array as a parameter
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Arrays;
import java.util.Random;

final class Main {
  /**
   * This function calculates the sum of an array.
   *
   * @param args array of integers
   */
  public static int sumOfNumbers(int[] arrayOfNumbers) {
    // this function adds up all of the numbers in the list, using a For Each loop
    int total = 0;

    for (int aSingleNumber : arrayOfNumbers) {
      total += aSingleNumber;
    }

    return total;
  }

  private Main() {
    // Prevent instantiation
    // Optional: throw an exception e.g. AssertionError
    // if this ever *is* called
    throw new IllegalStateException("Cannot be instantiated");
  }

  /**
   * Main entry point into program.
   *
   * @param args nothing passed in
   */
  public static void main(final String[] args) {
    int[] arrayOfNumbers = new int[10];
    long seed = System.currentTimeMillis();
    Random rand = new Random(seed);

    // input
    for (int counter = 0; counter < arrayOfNumbers.length; counter++) {
      arrayOfNumbers[counter] = rand.nextInt(100) + 1;
      System.out.println("The random number is: " + arrayOfNumbers[counter]);
    }
    System.out.println();

    // Call function
    int total = sumOfNumbers(arrayOfNumbers);

    // output
    System.out.println("\nThe sum of the numbers is: " + total);

    System.out.println("\nDone.");
  }
}
