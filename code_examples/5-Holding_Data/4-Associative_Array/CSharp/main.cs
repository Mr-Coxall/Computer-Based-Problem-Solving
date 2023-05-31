/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a dictionary
*/

using System;
using System.Collections.Generic;

/*
 * The Program class
*/
class Program {
    static void Main() {
        // this function uses a dictionary
        string airportName;

        // an empty dictionary
        Dictionary<string, string> airports = new Dictionary<string, string>();

        // a dictionary filled with data
        Dictionary<char, int> someInfo = new Dictionary<char, int>() {
            {'a', 1},
            {'b', 2},
            {'c', 3}
        };

        // adding items
        airports["YYZ"] = "Toronto Pearson";
        airports["YOW"] = "Ottawa Canada";
        airports["DUB"] = "Dublin Ireland";
        airports["LHR"] = "London Heathrow";

        Console.WriteLine("All the airports:");
        foreach (var pair in airports) {
            Console.WriteLine("The airport code is " + pair.Key + " for " + pair.Value);
        }
        Console.WriteLine();

        Console.Write("Type in an airport code: ");
        airportName = Console.ReadLine();
        Console.WriteLine();

        if (airports.ContainsKey(airportName)) {
            Console.WriteLine("The name of the airport you chose is " + airports[airportName]);
        } else {
            Console.WriteLine("That airport is not in the airport's dictionary.");
        }

    Console.WriteLine("\nDone.");
    }
}