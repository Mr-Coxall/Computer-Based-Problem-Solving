/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks if there is over 30 students
 */

package main

import "fmt"

func main() {
	// this function checks if there is over 30 students
	const maxStudentNumber int = 30
	var numberOfStudents int

	// input
	fmt.Print("Enter the number of students: ")
	fmt.Scan(&numberOfStudents)

	// process
	if numberOfStudents > maxStudentNumber {
		// output
		fmt.Println("Too many students!")
	}

	fmt.Println("\nDone.")
}
