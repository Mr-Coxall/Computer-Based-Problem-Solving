/*
 * This program calculates factorial
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
    static int factorial(int number) {
      // recursive function calculating factorial
      if (number == 1) {
          return 1;
      } else {
          return number * factorial(number - 1);
      }
    }

  public static void main(String[] args) {
    // this function gets user input
    int userInputInt;

    // input
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a positive integer: ");
    userInputInt = scanner.nextInt();

    if (userInputInt < 0) {
      System.out.println("That was not a positive integer.");
    } else {
      // call function
      int factorialAnswer = factorial(userInputInt);
      System.out.printf("The factorial of %d is %d%n", userInputInt, factorialAnswer);
    }

    System.out.println("\nDone.");
  }
}
