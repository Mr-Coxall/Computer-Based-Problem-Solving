/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates the area of circle
 */

const prompt = require('prompt-sync')();

function calculateArea(radius) {
  // this function calculates the area of circle
  
  // process
  const area = Math.PI * radius ** 2;

  return area
}

// input
const radius = parseInt(prompt("Enter the radius of a circle (cm): "));
console.log();

// call functions
area = calculateArea(radius);

// output
console.log(`The area is ${area} cm²`);

console.log("\nDone.");
