/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates factorial
 */

package main

import "fmt"

func factorial(number int) int {
	// recursive function calculating factorial
	if number == 1 {
		return 1
	} else {
		return number * factorial(number-1)
	}
}

func main() {
	// this function gets user input
	var userInputInt int

	// input
	fmt.Print("Enter a positive integer: ")
	fmt.Scanln(&userInputInt)

	if userInputInt < 0 {
		fmt.Println("That was not a positive integer.")
	} else {
		// call function
		factorialAnswer := factorial(userInputInt)
		fmt.Printf("The factorial of %d is %d\n", userInputInt, factorialAnswer)
	}

	fmt.Println("\nDone.")
}
