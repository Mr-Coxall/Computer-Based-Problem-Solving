/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a compound boolean statement
 */

const prompt = require("prompt-sync")()

// input
const termMark = parseInt(prompt("Enter term mark (as %): "));
const projectMark = parseInt(prompt("Enter project mark (as %): "));
console.log("");

// process & output
if (termMark >= 50 && projectMark >= 50) {
  console.log("You passed the course.");
} else {
  console.log("You did not pass the course.");
}

console.log("\nDone.");
