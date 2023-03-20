/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks a traffic light
 */

package main

import "fmt"

func main() {
	// this function checks a traffic light
	var lightColor string

	// input
	fmt.Print("Enter the color of the traffic light: ")
	fmt.Scan(&lightColor)

	// process and output
	if lightColor == "red" {
		fmt.Println("Stop!")
	} else if lightColor == "yellow" {
		fmt.Println("Slow down!")
	} else if lightColor == "green" {
		fmt.Println("Go!")
	} else {
		fmt.Println("Not a valid color.")
	}

	fmt.Println("\nDone.")
}
