/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a nested loop
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses a nested loop

	var counter1 int
	var counter2 int

	// process & output
	for counter1 < 10 {
		for counter2 < 10 {
			fmt.Printf("Odometer:%d%d\n", counter1, counter2)
			counter2++
		}
		counter2 = 0
		counter1++
	}

	fmt.Println("\nDone.")
}
