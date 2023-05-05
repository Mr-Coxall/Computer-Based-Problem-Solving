/*
 * This program calculates the area of circle
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

final class Main {
  /**
   * Calculates calculates the area of circle.
   *
   * @param args nothing passed in
   */
  public static void calculateArea(int radius) {
    // process
    int area = Math.PI * Math.pow(radius, 2);

    // output
    System.out.printf("The area is %d cm²%n", area);
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
    // input
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the radius of a circle (cm): ");
    int radius = scanner.nextInt();
    System.out.println();

    // call functions
    calculateArea(length, width);

    System.out.println("\nDone.");
  }
}
