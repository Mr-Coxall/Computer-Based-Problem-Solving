/*
 * This program checks if there is over 30 students
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function checks if there is over 30 students
    final int MAX_STUDENT_NUMBER = 30;
    int numberOfStudents;

    // input
    Scanner input = new Scanner(System.in);
    System.out.print("Enter the number of students: ");
    numberOfStudents = input.nextInt();

    // process
    if (numberOfStudents > MAX_STUDENT_NUMBER) {
      // output
      System.out.println("Too many students!");
    }

    System.out.println("\nDone.");
  }
}
