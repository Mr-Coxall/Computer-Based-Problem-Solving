/*
 * This program shows declaring variables
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

  /** Some floating point number. */
  public static final float SOME_FLOAT = 14.65F;

  /**
   * Main entry point into program.
   *
   * @param args nothing passed in
   */
  public static void main(final String[] args) {
    // variable definition
    boolean isCurrent = true; // bool
    int age = 0; // int
    float area = SOME_FLOAT; // float
    String someWords = "Hello, World!"; // string

    System.out.println(isCurrent);
    System.out.println(age);
    System.out.println(area);
    System.out.println(someWords);

    System.out.println("\nDone.");
  }
}
