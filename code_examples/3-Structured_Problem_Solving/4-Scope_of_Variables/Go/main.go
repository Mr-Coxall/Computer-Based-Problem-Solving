/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows how local and global variables work
 */

package main

import "fmt"

// global variable
var variableX = 25

func localVariable() {
	// this shows what happens with local variables
	var variableX = 10
	var variableY = 30

	variableX++
	variableZ := variableX + variableY

	fmt.Println("Local variableX, variableY, variableZ:", variableX, "+", variableY, "=", variableZ)
}

func globalVariable() {
	// this shows what happens with global variables
	variableY := 30

	variableX++
	variableZ := variableX + variableY

	fmt.Println("Global variableX, variableY, variableZ:", variableX, "+", variableY, "=", variableZ)
}

func main() {
	localVariable()
	globalVariable()

	fmt.Println("\nDone.")
}
