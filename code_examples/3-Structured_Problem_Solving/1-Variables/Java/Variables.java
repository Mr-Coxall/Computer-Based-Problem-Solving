/*
 * This program shows declaring variables
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
*/

final class Variables {
    private Variables() {
        // Prevent instantiation
        // Optional: throw an exception e.g. AssertionError
        // if this ever *is* called
        throw new IllegalStateException("Cannot be instantiated");
    }
    /**
     * Main entry point into program.
     * @param args nothing passed in
    */
    public static void main(final String[] args) {
        // variable definition
        boolean isCurrent = true;
        int age = 0;
        float area = 14.65F;
        String someWords = "Hello, World!";

        System.out.println(isCurrent);
        System.out.println(age);
        System.out.println(area);
        System.out.println(someWords);

        System.out.println("\nDone.");
    }
}
