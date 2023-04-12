/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program checks a traffic light
*/

const prompt = require('prompt-sync')();

// input
const lightColor = prompt('Enter the color of the traffic light: ');

// process and output
if (lightColor === 'red') {
  console.log('Stop!');
} else if (lightColor === 'yellow') {
  console.log('Slow down!');
} else if (lightColor === 'green') {
  console.log('Go!');
} else {
  console.log('Not a valid color.');
}

console.log('\nDone.');
