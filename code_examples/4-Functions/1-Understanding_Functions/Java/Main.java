/*
 * This program uses user defined functions
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

final class Main {
  private Main() {
    // Prevent instantiation
    // Optional: throw an exception e.g. AssertionError
    // if this ever *is* called
    throw new IllegalStateException("Cannot be instantiated");
  }

  public static void calculateArea() {
    // input
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the length of a rectangle (cm): ");
    int length = scanner.nextInt();
    System.out.print("Enter the width of a rectangle (cm): ");
    int width = scanner.nextInt();

    // process
    int area = length * width;

    // output
    System.out.printf("The area is %d cm²%n%n", area);
  }

  public static void calculatePerimeter() {
    // input
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the length of a rectangle (cm): ");
    int length = scanner.nextInt();
    System.out.print("Enter the width of a rectangle (cm): ");
    int width = scanner.nextInt();

    // process
    int perimeter = 2 * (length + width);

    // output
    System.out.printf("The perimeter is %d cm%n%n", perimeter);
  }

  /**
   * Main entry point into program.
   *
   * @param args nothing passed in
   */
  public static void main(final String[] args) {
    // call functions
    calculateArea();
    calculatePerimeter();

    System.out.println("\nDone.");
  }
}
