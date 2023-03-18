/*
 * This program shows how local and global variables work
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

  // global variable
  static int variableX = 25;

  /**
   * The localVariable() function.
   *
   * @param nil
   * @return nil
   */
  public static void localVariable() {
    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;

    System.out.println(
        "Local variableX, variableY, variableZ: "
            + variableX
            + " + "
            + variableY
            + " = "
            + variableZ);
  }

  /**
   * The globalVariable() function.
   *
   * @param nil
   * @return nil
   */
  public static void globalVariable() {
    int variableY = 30;
    int variableZ = variableX + variableY;

    System.out.println(
        "Local variableX, variableY, variableZ: "
            + variableX
            + " + "
            + variableY
            + " = "
            + variableZ);
  }

  /**
   * Main entry point into program.
   *
   * @param args nothing passed in
   */
  public static void main(final String[] args) {
    // this function calls local and global
    localVariable();
    globalVariable();

    System.out.println("\nDone.");
  }
}
