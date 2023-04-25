/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program is the Fizz Buzz program
 */

package main

import (
	"fmt"
)

func main() {
	// this function is the Fizz Buzz program

	// process & output
	for counter := 1; counter <= 100; counter++ {
		switch {
		case counter%3 == 0 && counter%5 == 0:
			fmt.Println("Fizz-Buzz")
		case counter%3 == 0:
			fmt.Println("Fizz")
		case counter%5 == 0:
			fmt.Println("Buzz")
		default:
			fmt.Println(counter)
		}
	}
	fmt.Println("\nDone.")
}
