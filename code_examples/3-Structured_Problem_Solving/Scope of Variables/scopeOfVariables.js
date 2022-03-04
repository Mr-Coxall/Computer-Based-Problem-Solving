// Copyright (c) Jonathan Pasco-Arnone All rights reserved.
//
// Created by: Jonathan Pasco-Arnone
// Created on: Mar 2022
// This program shows how local and global variables work

var variableX = 25;

function localVarible() {
    var variableX = 10;
    var variableY = 30;
    var variableZ = variableX + variableY;
    console.log("Local variableX, variableY, variableZ: " + variableX + " + " + variableY + " = " + variableZ);
}

function globalVarible() {
    variableX = variableX + 1;
    var variableY = 30;
    var variableZ = variableX + variableY
    console.log("Global variableX. Local variableY, variableZ: " + variableX + " + " + variableY + " = " + variableZ);
}

localVarible();
globalVarible();
