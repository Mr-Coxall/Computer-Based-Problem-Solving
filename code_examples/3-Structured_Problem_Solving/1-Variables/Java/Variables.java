/*
 * This program shows declaring variables
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
*/

final class Variables {
    private MaxMin() {
        // Prevent instantiation
        // Optional: throw an exception e.g. AssertionError
        // if this ever *is* called
        throw new IllegalStateException("Cannot be instantiated");
    }
    /**
     * This is the main method.
     * */
    
     public static void main(final String[] args) {
         // variable definition
         boolean isCurrent = true;
         int age = 0;
         float area;
         String someWords = "Hello, World!";
    }
}
