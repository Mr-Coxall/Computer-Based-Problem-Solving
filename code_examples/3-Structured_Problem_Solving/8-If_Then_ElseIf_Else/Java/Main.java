/*
 * This program checks a traffic light
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // this function checks a traffic light
        String lightColor;

        // input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the color of the traffic light: ");
        lightColor = scanner.nextLine();

        // process and output
        if (lightColor.equals("red")) {
            System.out.println("Stop!");
        } else if (lightColor.equals("yellow")) {
            System.out.println("Slow down!");
        } else if (lightColor.equals("green")) {
            System.out.println("Go!");
        } else {
            System.out.println("Not a valid color.");
        }

        System.out.println("\nDone.");
    }
}
