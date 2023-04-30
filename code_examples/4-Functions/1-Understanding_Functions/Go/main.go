/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses user defined functions
 */

package main

import (
	"fmt"
)

func calculateArea() {
	// input
	var length, width int
	fmt.Print("Enter the length of a rectangle (cm): ")
	fmt.Scanln(&length)
	fmt.Print("Enter the width of a rectangle (cm): ")
	fmt.Scanln(&width)

	// process
	area := length * width

	// output
	fmt.Printf("The area is %d cm²\n\n", area)
}

func calculatePerimeter() {
	// input
	var length, width int
	fmt.Print("Enter the length of a rectangle (cm): ")
	fmt.Scanln(&length)
	fmt.Print("Enter the width of a rectangle (cm): ")
	fmt.Scanln(&width)

	// process
	perimeter := 2 * (length + width)

	// output
	fmt.Printf("The perimeter is %d cm\n\n", perimeter)
}

func main() {
	// call functions
	calculateArea()
	calculatePerimeter()

	fmt.Println("\nDone.")
}
