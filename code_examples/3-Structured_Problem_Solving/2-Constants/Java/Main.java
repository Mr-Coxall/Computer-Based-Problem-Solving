/*
 * This program shows declaring constants
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

    /**
     * Constant number of lives.
     */
    private static final int ROOM = 212;

    /**
     * Constant for HST.
     */
    private static final double HST = 0.13;

    /**
     * Constant for COUNTRY.
     */
    private static final String COUNTRY = "Canada";

    /**
     * Main entry point into program.
     * @param args nothing passed in
     */
    public static void main(final String[] args) {
        // output
        System.out.println("Room: " + ROOM);
        System.out.println(HST + "%");
        System.out.println(COUNTRY);

        System.out.println("\nDone.");
    }
}
