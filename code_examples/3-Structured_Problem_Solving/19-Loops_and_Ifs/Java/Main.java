/*
 * This program is the Fizz Buzz program
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  /**
   * This function handles all the inputs and outputs.
   *
   * @param args
   */
  public static void main(String[] args) {
    // this function is the Fizz Buzz program

    // process & output
    for (int counter = 1; counter <= 100; counter++) {
      if (counter % 3 == 0 && counter % 5 == 0) {
        System.out.println("Fizz-Buzz");
      } else if (counter % 3 == 0) {
        System.out.println("Fizz");
      } else if (counter % 5 == 0) {
        System.out.println("Buzz");
      } else {
        System.out.println(counter);
      }
    }
    System.out.println("\nDone.");
  }
}
