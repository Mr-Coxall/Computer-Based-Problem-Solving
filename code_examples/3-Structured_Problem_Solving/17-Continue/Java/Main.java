/*
 * This program uses a continue statement
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function uses a continue statement

    // create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter a count-down number (ex: 10): ");
    String positiveIntegerStr = scanner.nextLine();
    System.out.println();

    // process & output
    int positiveInteger = Integer.parseInt(positiveIntegerStr);

    while (positiveInteger >= 0) {
      // yes, this is the exception on placing the counter at the top
      // if you did not, then there would be an infinit loop

      positiveInteger--;
      if (positiveInteger + 1 == 5) {
        continue;
      }
      System.out.println("Current variable value: %d".formatted(positiveInteger + 1));
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
