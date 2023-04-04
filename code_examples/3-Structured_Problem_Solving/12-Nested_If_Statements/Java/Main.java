/*
 * This program uses a nested if statement
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function uses a nested if statement

    // create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter the number of boxes of cookies you sold: ");
    String cookiesSoldStr = scanner.nextLine();
    System.out.println();

    // process & output
    int cookiesSold = Integer.parseInt(cookiesSoldStr);

    if (cookiesSold >= 20) {
      if (cookiesSold < 30) {
        System.out.println("You get a small prize.");
      } else {
        System.out.println("You get a large prize.");
      }
    } else {
      System.out.println("No prize.");
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
