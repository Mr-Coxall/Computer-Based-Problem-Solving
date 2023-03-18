/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows assingment statements
 */

package main

import "fmt"

func main() {
	// variable definition
	numberOfStudents := 2
	width := 32.5
	length := 10.0
	someWords1 := "Hello"
	someWords2 := "World!"

	// using assignment statements
	numberOfStudents += 5
	areaOfRectangle := length * width
	helloWorld := someWords1 + ", " + someWords2

	// output
	fmt.Println("The number of students is:", numberOfStudents)
	fmt.Println("The area of a rectangle is:", areaOfRectangle, "cm²")
	fmt.Println(helloWorld)

	fmt.Println("\nDone.")
}
