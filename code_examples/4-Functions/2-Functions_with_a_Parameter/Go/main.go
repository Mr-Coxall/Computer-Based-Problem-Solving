/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates the area of circle
 */

package main

import (
	"fmt"
	"math"
)

func calculateArea(radius int) {
	// this function calculates the area of circle

	// process
	area := math.Pi * radius ** 2

	// output
	fmt.Printf("The area is %d cm²\n", area)
}

func main() {
	// input
	var radius int
	fmt.Print("Enter the radius of a circle (cm): ")
	fmt.Scanln(&radius)
	fmt.Println()

	// call functions
	calculateArea(radius)

	fmt.Println("\nDone.")
}
