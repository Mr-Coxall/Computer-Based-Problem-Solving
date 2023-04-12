/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a nested if statement
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a nested if statement

	var cookiesSold int

	// input
	fmt.Print("Enter the number of boxes of cookies you sold: ")
	fmt.Scan(&cookiesSold)
	fmt.Println()

	// process & output
	if cookiesSold >= 20 {
		if cookiesSold < 30 {
			fmt.Println("You get a small prize.")
		} else {
			fmt.Println("You get a large prize.")
		}
	} else {
		fmt.Println("No prize.")
	}

	fmt.Println("\nDone.")
}
