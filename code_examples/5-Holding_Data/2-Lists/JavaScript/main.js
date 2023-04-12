/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks for a runtime error
 */

const prompt = require("prompt-sync")()

// input
const integerAsString = prompt("Enter an integer: ")

// process & output
const integerAsNumber = parseInt(integerAsString)

if (integerAsNumber != NaN) {
  console.log(`You entered: ${integerAsNumber}.`)
} else {
  console.log("Invalid input.")
}

console.log("\nDone.")
