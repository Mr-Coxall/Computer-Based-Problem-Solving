/*
 * This program uses a break statement
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    // this function uses a break statement

    // create Scanner object for user input
    Scanner scanner = new Scanner(System.in);

    // input
    System.out.print("Enter how many times to repeat: ");
    String positiveIntegerStr = scanner.nextLine();
    System.out.println();

    // process & output
    int positiveInteger = Integer.parseInt(positiveIntegerStr);

    for (int loopCounter = 0; loopCounter < positiveInteger; loopCounter++) {
      System.out.println("%d time(s) through the loop.".formatted(loopCounter));
      if (loopCounter >= 5) {
        break;
      }
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
