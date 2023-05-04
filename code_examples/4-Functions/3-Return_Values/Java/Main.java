/*
 * This program uses user defined functions
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

final class Main {
  /**
   * Calculates area of rectangle.
   *
   * @param args nothing passed in
   */
  public static int calculateArea(int length, int width) {
    // process
    int area = length * width;

    return area;
  }

  /**
   * Calculates perimeter of rectangle.
   *
   * @param args nothing passed in
   */
  public static int calculatePerimeter(int length, int width) {
    // process
    int perimeter = 2 * (length + width);

    return perimeter;
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
    // this function does the input and output
    int area = 0;
    int perimeter = 0;

    // input
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the length of a rectangle (cm): ");
    int length = scanner.nextInt();
    System.out.print("Enter the width of a rectangle (cm): ");
    int width = scanner.nextInt();
    System.out.println();

    // call functions
    area = calculateArea(length, width);
    perimeter = calculatePerimeter(length, width);

    // output
    System.out.printf("The area is %d cm²%n", area);
    System.out.printf("The perimeter is %d cm%n", perimeter);

    System.out.println("\nDone.");
  }
}
