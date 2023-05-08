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
 
 func main() {
	 // this function does the input and output
	 var area = 0
 
	 // input
	 var length_from_user, width_from_user int
	 fmt.Print("Enter the length of a rectangle (cm): ")
	 fmt.Scanln(&length_from_user)
	 fmt.Print("Enter the width of a rectangle (cm): ")
	 fmt.Scanln(&width_from_user)
	 fmt.Println()
 
	 // call functions
	 area = calculateArea(length_from_user, width_from_user)
 
	 // output
	 fmt.Printf("The area is %d cm²\n", area)
 
	 fmt.Println("\nDone.")
 }
 