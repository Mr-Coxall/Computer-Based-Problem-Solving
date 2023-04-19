/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a continue statement
 */

const prompt = require("prompt-sync")()

let counter = 0

// input
const positiveIntegerStr = prompt("Enter a count-down number (ex: 10): ")
console.log("")

// process & output
let positiveInteger = parseInt(positiveIntegerStr)

while (positiveInteger >= 0) {
  // yes, this is the exception on placing the counter at the top
  // if you did not, then there would be an infinit loop

  positiveInteger--
  if (positiveInteger == 5) {
    continue
  }
  console.log(`Current variable value: ${positiveInteger + 1}`)
}

console.log("\nDone.")
