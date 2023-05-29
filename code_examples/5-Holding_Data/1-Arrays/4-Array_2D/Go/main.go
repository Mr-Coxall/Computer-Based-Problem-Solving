/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a 2D array
 */

package main

import (
	"fmt"
	"math/rand"
)

func sumOfNumbers(arrayOfNumbers [][]int) int {
	total := 0

	for _, row := range arrayOfNumbers {
		for _, value := range row {
			total += value
		}
	}

	return total
}

func main() {
	var a2DList [][]int
	var sumAnswer int

	// input
	var rows, columns int
	fmt.Print("How many rows would you like: ")
	fmt.Scanln(&rows)
	fmt.Print("How many columns would you like: ")
	fmt.Scanln(&columns)

	for i := 0; i < rows; i++ {
		tempColumn := make([]int, columns)
		for j := 0; j < columns; j++ {
			aRandomNumber := rand.Intn(10)
			tempColumn[j] = aRandomNumber
			fmt.Printf("%d ", aRandomNumber)
		}
		a2DList = append(a2DList, tempColumn)
		fmt.Println()
	}

	sumAnswer = sumOfNumbers(a2DList)

	// output
	fmt.Printf("\nThe sum of all the numbers is: %d\n", sumAnswer)

	fmt.Println("\nDone.")
}
