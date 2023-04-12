/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a break statement
 */

const prompt = require("prompt-sync")()

let counter = 0

// input
const positiveIntegerStr = prompt("Enter how many times to repeat: ")
console.log("")

// process & output
const positiveInteger = parseInt(positiveIntegerStr)

for (var loopCounter = 0; loopCounter < positiveInteger; loopCounter++) {
  console.log(`${counter} time(s) through the loop.`)
  if (loopCounter >= 5){
    break
  }
}

console.log("\nDone.")
