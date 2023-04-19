/*
 * This program uses a nested loop
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

public class Main {
  public static void main(String[] args) {
    // this function uses a nested loop

    // process & output
    for (int counter1 = 0; counter1 < 10; counter1++) {
      for (int counter2 = 0; counter2 < 10; counter2++) {
        System.out.println("Odometer: %d%d".formatted(counter1, counter2));
      }
    }

    System.out.println("\nDone.");
  }
}
