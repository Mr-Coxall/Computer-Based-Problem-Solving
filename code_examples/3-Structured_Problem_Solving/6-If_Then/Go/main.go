/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks if ther is over 30 students
 */

package main

import "fmt"

func main() {
	// this function checks if ther is over 30 students
	const MAX_STUDENT_NUMBER int = 30
	var numberOfStudents int

	// input
	fmt.Print("Enter the number of students: ")
	fmt.Scan(&numberOfStudents)

	// process
	if numberOfStudents > MAX_STUDENT_NUMBER {
		// output
		fmt.Println("Too many students!")
	}

	fmt.Println("\nDone.")
}
