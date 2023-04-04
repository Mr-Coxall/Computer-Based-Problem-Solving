/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a nested if statement
 */

const prompt = require("prompt-sync")()

// input
const cookiesSoldStr = prompt("Enter the number of boxes of cookies you sold: ")
console.log("")

// process & output
const cookiesSold = parseInt(cookiesSoldStr)

if (cookiesSold >= 20) {
  if (cookiesSold < 30) {
    console.log("You get a small prize.")
  } else {
    console.log("You get a large prize.")
  }
} else {
  console.log("No prize.")
}

console.log("\nDone.")
