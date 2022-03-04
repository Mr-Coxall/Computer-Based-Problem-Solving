// Copyright (c) Jonathan Pasco-Arnone All rights reserved.
//
// Created by: Jonathan Pasco-Arnone
// Created on: Mar 2022
// This program shows how local and global variables work

package main

import (
	"fmt"
)

// global variable
var variableX int = 25

func localVariable() {
    // this shows what happens with local variables
	var variableX int = 10
	var variableY int = 30
	var variableZ int = variableX + variableY
	fmt.Printf("Local variableX, variableY, variableZ: %v + %v = %v\n",
               variableX, variableY, variableZ)
}

func globalVariable() {
    // this shows what happens with global variables
	variableX = variableX + 1
	var variableY int = 30
	var variableZ int = variableX + variableY
	fmt.Printf("Global variableX. Local variableY, variableZ: %v + %v = %v\n",
               variableX, variableY, variableZ)
}

func main() {
    localVariable()
    globalVariable()
}
