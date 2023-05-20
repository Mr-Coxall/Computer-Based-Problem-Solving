/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses an array as a parameter
 */

package main

import (
	"fmt"
	"math/rand"
	"time"
)

// In Go, an array is passed by value to a function
func sumOfNumbers(arrayOfNumbers []int) int {
	// this function adds up all of the numbers in the array
	total := 0
	counter := 0

	while counter < len(arrayOfNumbers) {
		total += arrayOfNumbers[counter]
		counter++
	}

	return total
}

func main() {
	// this function uses an array as a parameter
	rand.Seed(time.Now().UnixNano())
	var arrayOfNumbers [10]int

	// input
	for counter := 0; counter < len(arrayOfNumbers); counter++ {
		arrayOfNumbers[counter] = rand.Intn(100) + 1
		fmt.Println("The number is:", arrayOfNumbers[counter])
	}
	fmt.Println("")

	// call function
	total := sumOfNumbers(arrayOfNumbers[:])

	// output
	fmt.Println("The sum of all the numbers is:", total)

	fmt.Println("\nDone.")
}
