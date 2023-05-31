/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program uses a map
 */

const prompt = require("prompt-sync")()

// this function uses a map
let airportName;

// an empty map
const airports = new Map();

// a map filled with data
const someInfo = new Map([
  ['a', 1],
  ['b', 2],
  ['c', 3],
]);

// adding items
airports.set("YYZ", "Toronto Pearson");
airports.set("YOW", "Ottawa Canada");
airports.set("DUB", "Dublin Ireland");
airports.set("LHR", "London Heathrow");

console.log("All the airports:");
for (let [code, name] of airports) {
  console.log(`The airport code is ${code} for ${name}`);
}
console.log();

airportName = prompt("Type in an airport code: ");
console.log();

if (airports.has(airportName)) {
  console.log("The name of the airport you chose is", airports.get(airportName));
} else {
  console.log("That airport is not in the airport's dictionary.");
}

console.log("\nDone.")
