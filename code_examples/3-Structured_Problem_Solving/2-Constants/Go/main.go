/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows declaring constants
 */

package main

import "fmt"

func main() {
	// constant definition
	const ROOM int = 212
	const HST float64 = 0.13
	const COUNTRY string = "Canada"

	fmt.Println("Room:", ROOM)
	fmt.Println(HST*100, "%")
	fmt.Println(COUNTRY)

	fmt.Println("\nDone.")
}
