/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a map
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a map

	var airportName string

	// an empty map
	airports := make(map[string]string)

	/*
	// a map filled with data
	someInfo := map[byte]int{
		'a': 1,
		'b': 2,
		'c': 3,
	}
	*/

	// adding items
	airports["YYZ"] = "Toronto Pearson"
	airports["YOW"] = "Ottawa Canada"
	airports["DUB"] = "Dublin Ireland"
	airports["LHR"] = "London Heathrow"

	fmt.Println("All the airports:")
	for code, name := range airports {
		fmt.Printf("The airport code is %s for %s\n", code, name)
	}
	fmt.Println()

	fmt.Print("Type in an airport code: ")
	fmt.Scanln(&airportName)
	fmt.Println()

	if name, ok := airports[airportName]; ok {
		fmt.Println("The name of the airport you chose is", name)
	} else {
		fmt.Println("That airport is not in the airport's dictionary.")
	}

	fmt.Println("\nDone.")
}
