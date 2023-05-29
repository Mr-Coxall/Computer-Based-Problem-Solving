/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a list
 */

package main

import (
	"container/list"
	"fmt"
)

func main() {
	// this function uses a list
	words := list.New()
	tempWord := "Go"

	fmt.Println("Please enter 1 word at a time. Enter STOP to end.")

	for tempWord != "STOP" {
		fmt.Print("Enter a word: ")
		fmt.Scan(&tempWord)
		words.PushBack(tempWord)
	}

	words.Remove(words.Back()) // remove the "STOP" that was added
	fmt.Println()

	fmt.Println("Here are the words reversed:")
	for singleWord := words.Back(); singleWord != nil; singleWord = singleWord.Prev() {
		fmt.Println(singleWord.Value)
	}

	fmt.Println("\nDone.")
}
