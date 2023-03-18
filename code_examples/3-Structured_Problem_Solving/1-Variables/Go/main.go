/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows declaring variables
 */

package main

import (
	"fmt"
)

func main() {
	// variable definition
	is_current := true              // bool
	age := 32                       // int
	area := 32.4                    // float32
	someWords := "Hello, World!"   // string

	fmt.Println(is_current)
	fmt.Println(age)
	fmt.Println(area)
	fmt.Println(someWords)

	fmt.Println("\nDone.")
}
