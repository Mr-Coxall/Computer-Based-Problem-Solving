/*
 * This program program shows assingment statements
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
     * Constant number TWO.
     */
    private static final int TWO = 2;

    /**
     * Constant number THIRTY_TWO_POINT_FIVE.
     */
    private static final float THIRTY_TWO_POINT_FIVE = 32.5F;

    /**
     * Constant number TEN.
     */
    private static final float TEN = 10.0F;

        /**
     * Constant number FIVE.
     */
    private static final int FIVE = 10;

    /**
     * Main entry point into program.
     * @param args nothing passed in
     */
    public static void main(final String[] args) {
        // variable definition
        int numberOfStudents = TWO;
        float width = THIRTY_TWO_POINT_FIVE;
        float length = TEN;
        float areaOfRectangle = 0F;
        String someWords1 = "Hello";
        String someWords2 = "Wordl!";
        String helloWorld = null;

        // using assignment statements
        numberOfStudents = numberOfStudents + FIVE;
        areaOfRectangle = length * width;
        helloWorld = someWords1 + ", " + someWords2;

        // output
        System.out.println("The number of students is: " + numberOfStudents);
        System.out.println("The area of a rectangle is: "
                           + areaOfRectangle + " cm²");
        System.out.println(helloWorld);

        System.out.println("\nDone.");
    }
}
