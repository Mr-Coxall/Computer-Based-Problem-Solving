/*
 * This program shows how local and global variables work
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;  // Import the Scanner class

final class Main {
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
    // this function calculates total from subtotal and tax
    final float HST = 0.13f;
    float tax;
    float subTotal;
    float total;

    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter the subtotal: $");
    subTotal = scanner.nextFloat();

    // process
    tax = subTotal * HST;
    total = subTotal + tax;

    // output
    System.out.println();
    System.out.printf("The HST is: $%.2f.\n", tax);
    System.out.printf("The total cost is: $%.2f.\n", total);

    System.out.println("\nDone.");
  }
}
