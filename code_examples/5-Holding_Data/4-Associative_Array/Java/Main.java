/*
 * This program uses a map
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Main {
  public static void main(String[] args) {
    // this function uses a uses a map

    // this function uses a map
    String airportName;

    // an empty map
    Map<String, String> airports = new HashMap<>();

    // a map filled with data
    Map<Character, Integer> someInfo = new HashMap<>();
    someInfo.put('a', 1);
    someInfo.put('b', 2);
    someInfo.put('c', 3);

    // adding items
    airports.put("YYZ", "Toronto Pearson");
    airports.put("YOW", "Ottawa Canada");
    airports.put("DUB", "Dublin Ireland");
    airports.put("LHR", "London Heathrow");

    System.out.println("All the airports:");
    for (Map.Entry<String, String> entry : airports.entrySet()) {
        System.out.println("The airport code is " + entry.getKey() + " for " + entry.getValue());
    }
    System.out.println();

    Scanner scanner = new Scanner(System.in);
    System.out.print("Type in an airport code: ");
    airportName = scanner.nextLine();
    System.out.println();

    if (airports.containsKey(airportName)) {
        System.out.println("The name of the airport you chose is " + airports.get(airportName));
    } else {
        System.out.println("That airport is not in the airport's dictionary.");
    }

    // close the Scanner object
    scanner.close();
    System.out.println("\nDone.");
  }
}
