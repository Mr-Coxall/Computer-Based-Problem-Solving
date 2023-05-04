/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses user defined functions
 */

const prompt = require('prompt-sync')();

let area = 0;
let perimeter = 0;

function calculateArea(length, width) {
  // this function calculates the area of a rectangle
  
  // process
  const area = length * width;

  // output
  console.log(`The area is ${area} cm²`);
}

function calculatePerimeter(length, width) {
  // this function calculates the perimeter of a rectangle

  // process
  const perimeter = 2 * (length + width)

  return area
}

// input
const length = parseInt(prompt("Enter the length of a rectangle (cm): "))
const width = parseInt(prompt("Enter the width of a rectangle (cm): "))
console.log();

// call functions
area = calculateArea(length, width)
perimeter = calculatePerimeter(length, width)

// output
console.log(`The area is ${area} cm²`)
console.log(`The perimeter is ${perimeter} cm`)

console.log("\nDone.")

