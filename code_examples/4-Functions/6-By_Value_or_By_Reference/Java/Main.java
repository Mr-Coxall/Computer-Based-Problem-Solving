/*
 * This program uses a function by reference
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {

  /**
   * This function adds one to a number, by reference.
   * @param someNumber
   */
  public static void addOne(int[] someNumber) {
    someNumber[0] = someNumber[0] + 1;
  }

  public static void main(String[] args) {
    // this function uses a function by reference

    // In Java, you can pass a variable by reference by using an array
    int[] someVariable = new int[1];

    // input
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a number: ");
    someVariable[0] = input.nextInt();

    // process
    addOne(someVariable);

    // output
    System.out.println("The number plus one is: " + someVariable[0]);

    System.out.println("\nDone.");
  }
}
