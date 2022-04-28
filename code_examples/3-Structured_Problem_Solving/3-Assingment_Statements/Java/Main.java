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
     * Main entry point into program.
     * @param args nothing passed in
     */
    public static void main(final String[] args) {
        // variable definition
        int numberOfStudents = 2;
        float width = 32.5F;
        float length = 10.0F;
        float areaOfRectangle = 0F;
        String someWords1 = "Hello";
        String someWords2 = "Wordl!";
        String helloWorld = null;

        // using assignment statements
        numberOfStudents = numberOfStudents + 5;
        areaOfRectangle = length * width;
        helloWorld = someWords1 + ", " + someWords2;

        // output
        System.out.println("The number of students is: " + numberOfStudents);
        System.out.println("The area of a rectangle is: " + areaOfRectangle + " cm²");
        System.out.println(helloWorld);

        System.out.println("\nDone.");
    }
}
