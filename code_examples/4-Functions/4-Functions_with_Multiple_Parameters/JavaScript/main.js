/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates the area of a rectangle
 */

const prompt = require('prompt-sync')();

let area = 0;

function calculateArea(length, width) {
  // this function calculates the area of a rectangle
  
  // process
  const area = length * width;

  // output
  console.log(`The area is ${area} cm²`);
}

// input
const length = parseInt(prompt("Enter the length of a rectangle (cm): "))
const width = parseInt(prompt("Enter the width of a rectangle (cm): "))
console.log();

// call functions
area = calculateArea(length, width)

// output
console.log(`The area is ${area} cm²`)

console.log("\nDone.")
