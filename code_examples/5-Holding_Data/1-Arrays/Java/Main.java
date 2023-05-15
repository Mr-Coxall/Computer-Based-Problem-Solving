/*
 * This program uses an array
 * .... this was linted by GitHub Actions
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

final class Main {
  private Main() {
    // Prevent instantiation
    // Optional: throw an exception e.g. AssertionError
    // if this ever *is* called
    throw new IllegalStateException("Cannot be instantiated");
  }

public class Main {
    public static void main(String[] args) {
        // this function uses an array

        int[] studentMarks = new int[5];
        int aSingleMark;

        // get length of array
        int arrayLength = studentMarks.length;

        // input
        Scanner scanner = new Scanner(System.in);
        for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
            System.out.print("Enter a mark (percentage): ");
            aSingleMark = scanner.nextInt();
            studentMarks[loop_counter] = aSingleMark;
        }
        System.out.println();
        System.out.println("Here are the 5 marks:");

        for (int loop_counter = 0; loop_counter < arrayLength; loop_counter++) {
            System.out.print(studentMarks[loop_counter] + "% ");
        }

        System.out.println();
        System.out.println("\nDone.");
    }
}
