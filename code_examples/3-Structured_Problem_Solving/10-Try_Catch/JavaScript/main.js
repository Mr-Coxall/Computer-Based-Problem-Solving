/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks a student's grade
 */

const prompt = require("prompt-sync")()

// input
const grade = prompt("Enter your grade: ")

// process & output
switch (grade.toUpperCase()) {
  case "A":
    console.log("Excellent!")
    break
  case "B":
    console.log("Good job!")
    break
  case "C":
    console.log("Average.")
    break
  case "D":
    console.log("Poor.")
    break
  case "F":
    console.log("Fail.")
    break
  default:
    console.log("Invalid grade.")
    break
}

console.log("\nDone.")
