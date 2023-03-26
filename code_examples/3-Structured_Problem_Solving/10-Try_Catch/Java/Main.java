/*
 * This program uses a try statement
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function uses a try statement

    // create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter an integer: ");
    String integerAsString = scanner.nextLine();

    // process & output
    try {
        int integerAsNumber = Integer.parseInt(integerAsString);
        System.out.printf("The integer was: %d.%n", integerAsNumber);
    } catch (NumberFormatException e) {
        System.out.printf("The error was: %s.%n", e.getMessage());
    } finally {
        System.out.println("Thanks for playing.");
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
