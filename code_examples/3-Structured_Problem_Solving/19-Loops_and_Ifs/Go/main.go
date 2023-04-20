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
		if counter%3 == 0 && counter%5 == 0 {
			fmt.Println("Fizz-Buzz")
		} else if counter%3 == 0 {
			fmt.Println("Fizz")
		} else if counter%5 == 0 {
			fmt.Println("Buzz")
		} else {
			fmt.Println(counter)
		}
	}

	fmt.Println("\nDone.")
}
