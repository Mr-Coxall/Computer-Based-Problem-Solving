/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows how local and global variables work
*/

// global variable
var variableX = 25

function localVariable() {
    // this shows what happens with local variables
    let variableX = 10
    let variableY = 30

    variableX = variableX + 1
    let variableZ = variableX + variableY

    console.log("Local variableX, variableY, variableZ: " + variableX + " + " + variableY + " = " + variableZ)
}

function globalVariable() {
    // this shows what happens with global variables
    let variableY = 30

    variableX = variableX + 1
    let variableZ = variableX + variableY

    console.log("Local variableX, variableY, variableZ: " + variableX + " + " + variableY + " = " + variableZ)
}

localVariable()
globalVariable()

console.log("\nDone.")
