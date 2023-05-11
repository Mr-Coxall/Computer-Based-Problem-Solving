// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program prints out your name, using default function parameters

const prompt = require('prompt-sync')()

function FullName(firstName, lastName, middleName = "") {
    // return the full formal name
    let fullName = firstName

    if (middleName.length != 0) {
        fullName = fullName + " " + middleName[0] + "."
    }
    fullName = fullName + " " + lastName

    return fullName
}

// this function function calculates the full name
let middleName = ""

// input
let firstName = prompt('Enter your first name: ')
let question = prompt('Do you have a middle name? (y/n): ')

if (question.toUpperCase() == "Y" || question.toUpperCase() == "YES") {
    middleName = prompt('Enter your middle name: ')
}
let lastName = prompt('Enter your last name: ')

// call functions
let fullName = ""

if (middleName != "") {
    fullName = FullName(firstName, lastName, middleName)
} else {
    fullName = FullName(firstName, lastName)
}
console.log(`\nYour formal name is ${fullName}.`)

console.log("\nDone.")
