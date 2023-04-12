/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a compound boolean statement
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a compound boolean statement

	// input
	var termMark int
	var projectMark int

	fmt.Print("Enter term mark (as %): ")
	fmt.Scanln(&termMark)
	fmt.Print("Enter project mark (as %): ")
	fmt.Scanln(&projectMark)
	fmt.Println()

	// process & output
	if termMark >= 50 && projectMark >= 50 {
		fmt.Println("You passed the course.")
	} else {
		fmt.Println("You did not pass the course.")
	}

	fmt.Println("\nDone.")
}
