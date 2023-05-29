/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a list 
 */

const prompt = require("prompt-sync")()

// input
const words = [];
let tempWord = 'Go';

console.log('Please enter 1 word at a time. Enter STOP to end.');

while (tempWord.toUpperCase() !== 'STOP') {
  tempWord = prompt('Enter a word: ');
  words.push(tempWord);
}

words.pop(); // remove the "STOP" that was added
console.log();

console.log('Here are the words reversed:');
for (let loopCounter = words.length - 1; loopCounter >= 0; loopCounter--) {
  console.log(words[loopCounter]);
}

console.log("\nDone.")
