/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks for a runtime error
 */

const prompt = require("prompt-sync")()

// input
const integerAsString = prompt("Enter an integer: ")

// process & output
try{
  const integerAsNumber = parseInt(integerAsString)
  console.log(`You entered: ${integerAsNumber}.`)
} catch (err) {
  console.log(`The error was: {err}.`)
} finally {
  console.log("Thanks for playing.")
}

console.log("\nDone.")
