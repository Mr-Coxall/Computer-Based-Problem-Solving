/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program is the Fizz Buzz program
 */

// process & output
for (let counter = 1; counter <= 100; counter++) {
  if (counter % 3 === 0 && counter % 5 === 0) {
      console.log("Fizz-Buzz");
  } else if (counter % 3 === 0) {
      console.log("Fizz");
  } else if (counter % 5 === 0) {
      console.log("Buzz");
  } else {
      console.log(counter);
  }
}

console.log("\nDone.")
