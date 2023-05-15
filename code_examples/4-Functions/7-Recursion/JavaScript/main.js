/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program calculates factorial
*/

function factorial(number) {
  // recursive function calculating factorial
  if (number === 1) {
      return 1;
  } else {
      return number * factorial(number - 1);
  }
}

const prompt = require('prompt-sync')()

// input
const userInputInt = parseInt(prompt("Enter a positive integer: "));

if (userInputInt < 0) {
  console.log("That was not a positive integer.");
} else {
  // call function
  var factorialAnswer = factorial(userInputInt);
  console.log(`The factorial of ${userInputInt} is ${factorialAnswer}`);
}

console.log("\nDone.");
