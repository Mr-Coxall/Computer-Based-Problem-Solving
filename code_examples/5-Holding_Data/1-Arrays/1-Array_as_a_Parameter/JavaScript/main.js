/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses an array as a parameter
 */


function sumOfNumbers(arrayOfNumbers) {
  let total = 0;

  for (let number of arrayOfNumbers) {
      total += number;
  }

  return total;
}

// input
const numberList = [];
const seed = new Date().getTime();
const rand = require('random-seed').create(seed);

// input
for (let counter = 0; counter < 10; counter++) {
  const randomNumber = rand.intBetween(1, 100);
  numberList.push(randomNumber);
  console.log("The random number is: " + randomNumber);
}
console.log("\n");

// call the function
const sum = sumOfNumbers(numberList);

// output
console.log("The sum of all the numbers is: " + sum);

console.log("\nDone.");
