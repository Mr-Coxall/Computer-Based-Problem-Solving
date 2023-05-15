/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses an array
 */

package main

import (
	"fmt"
)

func main() {
	// this function uses an array

	var studentMarks [5]int
	var aSingleMark int

	arrayLength := len(studentMarks)

	// input
	for loopCounter := 0; loopCounter < arrayLength; loopCounter++ {
		fmt.Print("Enter a mark (percentage): ")
		fmt.Scan(&aSingleMark)
		studentMarks[loopCounter] = aSingleMark
	}

	fmt.Println()
	fmt.Println("Here are the 5 marks:")

	// get length of array
	for loopCounter := 0; loopCounter < arrayLength; loopCounter++ {
		fmt.Printf("%d%% ", studentMarks[loopCounter])
	}

	fmt.Println()
	fmt.Println("\nDone.")
}
