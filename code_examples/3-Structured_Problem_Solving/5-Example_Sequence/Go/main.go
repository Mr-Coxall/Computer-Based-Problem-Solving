/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates total from subtotal and tax
 */

package main

import (
    "fmt"
    "strconv"
)

func main() {
    // this function calculates total from subtotal and tax
    const HST float64 = 0.13
    var tax float64
    var subTotal float64
    var total float64

    // get user input
    fmt.Print("Enter the subtotal: $")
    var input string
    fmt.Scanln(&input)

    // convert user input to float64
    subTotal, err := strconv.ParseFloat(input, 64)
    if err != nil {
        fmt.Println("Invalid input, please enter a number.")
        return
    }

    // process input
    tax = subTotal * HST
    total = subTotal + tax

    // output results
    fmt.Println()
    fmt.Printf("The HST is: $%.2f.\n", tax)
    fmt.Printf("The total cost is: $%.2f.\n", total)

    fmt.Println("\nDone.")
}
