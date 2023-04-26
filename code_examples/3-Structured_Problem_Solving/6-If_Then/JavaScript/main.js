/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks if ther is over 30 students
*/

const prompt = require('prompt-sync')()
const MAX_STUDENT_NUMBER = 30

// input
const numberOfStudents = parseInt(prompt('Enter the number of students: '))

// process
if (numberOfStudents > MAX_STUDENT_NUMBER) {
    // output
    console.log("Too many students!")
}

console.log("\nDone.")
