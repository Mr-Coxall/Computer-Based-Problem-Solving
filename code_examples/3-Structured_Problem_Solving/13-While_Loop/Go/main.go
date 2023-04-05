/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a while loop
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a while loop

	var counter int = 0
	var positiveInteger int

	// input
	fmt.Print("Enter how many times to repeat: ")
	fmt.Scan(&positiveInteger)
	fmt.Println()

	// process & output
	for counter < positiveInteger {
		fmt.Printf("%d time(s) through the loop.\n", counter)
		counter++ // a short form for: counter = counter + 1
	}

	fmt.Println("\nDone.")
}
