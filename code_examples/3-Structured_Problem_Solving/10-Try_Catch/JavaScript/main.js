/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a try statement
 */

const prompt = require("prompt-sync")()

// input
const integerAsString = prompt("Enter an integer: ")

// process & output
try{
  const integerAsNumber = parseInt(integerAsString)
  console.log(`The integer was: ${integerAsNumber}.`)
} catch (err) {
  console.log(`The error was: {err}.`)
} finally {
  console.log("Thanks for playing.")
}

console.log("\nDone.")
