/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses user defined functions
 */

const prompt = require('prompt-sync')();

function calculateArea() {
  // input
  const length = parseInt(prompt("Enter the length of a rectangle (cm): "));
  const width = parseInt(prompt("Enter the width of a rectangle (cm): "));

  // process
  const area = length * width;

  // output
  console.log(`The area is ${area} cm²\n`);
}

function calculatePerimeter() {
  // input
  const length = parseInt(prompt("Enter the length of a rectangle (cm): "));
  const width = parseInt(prompt("Enter the width of a rectangle (cm): "));

  // process
  const perimeter = 2 * (length + width);

  // output
  console.log(`The perimeter is ${perimeter} cm\n`);
}

// call functions
calculateArea();
calculatePerimeter();

console.log("Done.");

