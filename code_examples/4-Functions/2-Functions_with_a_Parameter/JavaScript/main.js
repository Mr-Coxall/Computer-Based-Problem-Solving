/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses user defined functions
 */

const prompt = require('prompt-sync')();

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
  const perimeter = 2 * (length + width);

  // output
  console.log(`The perimeter is ${perimeter} cm`);
}

// input
const length = parseInt(prompt("Enter the length of a rectangle (cm): "));
const width = parseInt(prompt("Enter the width of a rectangle (cm): "));
console.log();

// call functions
calculateArea(length, width);
calculatePerimeter(length, width);

console.log("\nDone.");

