/*
 * This program uses a compound boolean statement
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function uses a compound boolean statement

    // create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter term mark (as %): ");
    int termMark = scanner.nextInt();
    System.out.print("Enter project mark (as %): ");
    int projectMark = scanner.nextInt();
    System.out.println();

    // process & output
    if (termMark >= 50 && projectMark >= 50) {
      System.out.println("You passed the course.");
    } else {
      System.out.println("You did not pass the course.");
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
