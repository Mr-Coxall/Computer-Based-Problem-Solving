/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks if there is over 30 students
*/

const prompt = require('prompt-sync')();
const MAX_STUDENT_NUMBER = 30;

// input
const numberOfStudents = parseInt(prompt('Enter the number of students: '));

// process and output
if (numberOfStudents > MAX_STUDENT_NUMBER) {
    console.log("Too many students!");
} else {
    console.log("Not too many students.");
}

console.log("\nDone.");
