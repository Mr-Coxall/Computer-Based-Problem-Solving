/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a break statement
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a break statement

	var counter int // in go no need to set to 0, it automaticall is!
	var positiveInteger int

	// input
	fmt.Print("Enter how many times to repeat: ")
	fmt.Scan(&positiveInteger)
	fmt.Println()

	// process & output
	for counter < positiveInteger {
		fmt.Printf("%d time(s) through the loop.\n", counter)
		if counter >= 5 {
			break
		}
		counter++ // a short form for: counter = counter + 1
	}

	fmt.Println("\nDone.")
}
