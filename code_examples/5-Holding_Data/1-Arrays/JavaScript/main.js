/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses an array
 */

const prompt = require('prompt-sync')()
const studentMarks = new Array(5);
let aSingleMark;

// get length of array
const arrayLength = studentMarks.length;

// input
for (let loopCounter = 0; loopCounter < arrayLength; loopCounter++) {
  aSingleMark = parseInt(prompt("Enter a mark (percentage): "));
  studentMarks[loopCounter] = aSingleMark;
}

console.log();
console.log("Here are the 5 marks:");

for (let loopCounter = 0; loopCounter < arrayLength; loopCounter++) {
  process.stdout.write(studentMarks[loopCounter] + "% ");
}

console.log();
console.log("\nDone.");
