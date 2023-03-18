// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates total from subtotal and tax

const prompt = require('prompt-sync')();

// this function calculates total from subtotal and tax
const HST = 0.13;
let tax;
let subTotal;
let total;

// get user input
subTotal = parseFloat(prompt("Enter the subtotal: $"));

// process input
tax = subTotal * HST;
total = subTotal + tax;

// output results
console.log();
console.log(`The HST is: $${tax.toFixed(2)}.`);
console.log(`The total cost is: $${total.toFixed(2)}.`);

console.log("\nDone.");
