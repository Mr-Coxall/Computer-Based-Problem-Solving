/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a continue statement
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a continue statement

	var positiveInteger int

	// input
	fmt.Print("Enter a count-down number (ex: 10): ")
	fmt.Scan(&positiveInteger)
	fmt.Println()

	// process & output
	for positiveInteger >= 0 {
		// yes, this is the exception on placing the counter at the top
		// if you did not, then there would be an infinite loop

		positiveInteger--

		if positiveInteger == 5 {
			continue
		}
		fmt.Printf("Current variable value: %d\n", positiveInteger + 1)
	}

	fmt.Println("\nDone.")
}
