/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a function by reference
 */

package main

import "fmt"

func addOne(someVariable *int) {
	// this function adds one to the variable passed in, by reference
	*someVariable = *someVariable + 1
}

func main() {
	// this function uses a function by reference
	var someNumber int

	// input
	fmt.Print("Enter a number: ")
	fmt.Scan(&someNumber)

	// Process
	addOne(&someNumber)

	// Output
	fmt.Println("The number plus one is:", someNumber)

	fmt.Println("\nDone.")
}
