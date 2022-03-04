// Copyright (c) Jonathan Pasco-Arnone All rights reserved.
//
// Created by: Jonathan Pasco-Arnone
// Created on: Mar 2022
// This program shows how local and global variables work

package main

import (
	"fmt"
)

// Global variable
var variableX int = 25

// This shows what happens with local variables
func localVariable() {
	var variableX int = 10
	var variableY int = 30
	var variableZ int = variableX + variableY
	fmt.Printf("Local variableX, variableY, variableZ: %v + %v = %v\n",
               variableX, variableY, variableZ)
}

// This shows what happens with global variables
func globalVariable() {
	variableX = variableX + 1
	var variableY int = 30
	var variableZ int = variableX + variableY
	fmt.Printf("Global variableX. Local variableY, variableZ: %v + %v = %v\n",
               variableX, variableY, variableZ)
}

// This function calls local and global
func main() {
    localVariable()
    globalVariable()
}
