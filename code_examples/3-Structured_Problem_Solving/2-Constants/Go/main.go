/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows declaring constants
 */

package main

import "fmt"

func main() {
	// constant definition, Go does not use ALL CAPS
	const room int = 212
	const hst float64 = 0.13
	const country string = "Canada"

	fmt.Println("Room:", room)
	fmt.Println(hst*100, "%")
	fmt.Println(country)

	fmt.Println("\nDone.")
}
