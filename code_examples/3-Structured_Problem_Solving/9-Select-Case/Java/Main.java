/*
 * This program checks a student's grade
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function checks a traffic light
  
    // create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter your grade: ");
    String grade = scanner.nextLine();

    // process & output
    switch (grade.toUpperCase()) {
      case "A":
          System.out.println("Excellent!");
          break;
      case "B":
          System.out.println("Good job!");
          break;
      case "C":
          System.out.println("Average.");
          break;
      case "D":
          System.out.println("Poor.");
          break;
      case "F":
          System.out.println("Fail.");
          break;
      default:
          System.out.println("Invalid grade.");
          break;
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
