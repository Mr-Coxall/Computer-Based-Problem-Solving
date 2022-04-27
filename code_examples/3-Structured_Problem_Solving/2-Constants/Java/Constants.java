/*
 * This program shows declaring constants
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

final class Constants {
    private Constants() {
        // Prevent instantiation
        // Optional: throw an exception e.g. AssertionError
        // if this ever *is* called
        throw new IllegalStateException("Cannot be instantiated");
    }

    /**
     * Some constants.
     */
    private static final int NUMBER_OF_LIVES = 3;
    private static final double HST = 0.13;

    /**
     * Main entry point into program.
     * @param args nothing passed in
     */
    public static void main(final String[] args) {
        // output

        System.out.println(NUMBER_OF_LIVES);
        System.out.println(HST);

        System.out.println("\nDone.");
    }
}
