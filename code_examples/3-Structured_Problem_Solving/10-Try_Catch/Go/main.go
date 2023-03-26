/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks for a runtime error
 */

package main

import (
	"fmt"
	"strconv"
)

func main() {
	// this function checks for a runtime error

	var integerAsString string

	// input
	fmt.Print("Enter an integer: ")
	fmt.Scanln(&integerAsString)

	// process and output
	integerAsNumber, err := strconv.Atoi(integerAsString)
	if err == nil {
		fmt.Println("You entered: ", integerAsNumber)
	} else {
		fmt.Println("The error was:", err, ".")
	}
	fmt.Println("Thanks for playing.")

	fmt.Println("\nDone.")
}
