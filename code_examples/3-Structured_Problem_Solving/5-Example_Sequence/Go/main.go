/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates total from subtotal and tax
 */

package main

import (
	"fmt"
)

func main() {
	// this function calculates total from subtotal and tax
	const HST float64 = 0.13
	var tax float64
	var subTotal float64
	var total float64

	// get user input
	fmt.Print("Enter the subtotal: $")
	fmt.Scanln(&subTotal)

	// process input
	tax = subTotal * HST
	total = subTotal + tax

	// output results
	fmt.Println()
	fmt.Printf("The HST is: $%.2f.\n", tax)
	fmt.Printf("The total cost is: $%.2f.\n", total)

	fmt.Println("\nDone.")
}
