/*
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a function by reference
*/

function addOne(someVariable) {
    // The addOne() function adds 1, by reference
    someVariable[0] = someVariable[0] + 1;
}
  
const prompt = require('prompt-sync')()
// In JavaScript, you can pass a variable by reference by using an array  
const someNumber = [];

// Input
const tempVar = parseInt(prompt("Enter a number: "));
someNumber.push(tempVar);

// Process
addOne(someNumber);

// Output
console.log(`The number plus one is: ` + someNumber[0]);

console.log("\nDone.");
