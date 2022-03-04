// Copyright (c) Jonathan Pasco-Arnone All rights reserved.
//
// Created by: Jonathan Pasco-Arnone
// Created on: Mar 2022
// This program shows how local and global variables work

// Global variable
let variableX = 25

// This shows what happens with local variables
func localVariable() {
    let variableX = 10
    let variableY = 30
    let variableZ = variableX + variableY
    print("Local variableX, variableY, variableZ: ",
        variableX, " + ", variableY, " = ", variableZ)
}
// This shows what happens with local variables
func globalVariable() {
    let variableX = 10
    let variableY = 30
    let variableZ = variableX + variableY
    print("Global variableX. Local variableY, variableZ: ",
        variableX, " + ", variableY, " = ", variableZ)
}

localVariable()
globalVariable()
