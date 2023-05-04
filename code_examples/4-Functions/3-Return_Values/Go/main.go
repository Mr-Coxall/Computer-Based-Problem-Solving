/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses user defined functions
 */

package main

import (
	"fmt"
)

func calculateArea(length int, width int) {
	// this function calculates the area of a rectangle

	// process
	area := length * width

	return area
}

func calculatePerimeter(length int, width int) {
	// this function calculates the perimeter of a rectangle
	// process
	perimeter := 2 * (length + width)

	return perimeter
}

func main() {
	// this function does the input and output
	var area = 0
	var perimeter = 0

	// input
	var length, width int
	fmt.Print("Enter the length of a rectangle (cm): ")
	fmt.Scanln(&length)
	fmt.Print("Enter the width of a rectangle (cm): ")
	fmt.Scanln(&width)
	fmt.Println()

	// call functions
	calculateArea(length, width)
	calculatePerimeter(length, width)

	// output
	fmt.Printf("The area is %d cm²\n", area)
	fmt.Printf("The perimeter is %d cm\n", perimeter)

	fmt.Println("\nDone.")
}
