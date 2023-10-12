/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks a student's grade
 */

package main

import (
	"fmt"
	"strings"
)

func main() {
	// this function checks a student's grade

	var grade string

	// input
	fmt.Print("Enter your grade: ")
	fmt.Scanln(&grade)

	// process and output
	switch strings.ToUpper(grade) {
		case "A":
			fmt.Println("Excellent!")
		case "B":
			fmt.Println("Good job!")
		case "C":
			fmt.Println("Average.")
		case "D":
			fmt.Println("Poor.")
		case "F":
			fmt.Println("Fail.")
		default:
			fmt.Println("Invalid grade.")
	}

	fmt.Println("\nDone.")
}
