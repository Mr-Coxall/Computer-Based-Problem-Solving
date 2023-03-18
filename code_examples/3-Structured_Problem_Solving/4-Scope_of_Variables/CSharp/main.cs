/* Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows how local and global variables work
*/

using System;

/*
 * The Program class
 * Contains all methods for performing how local and global variables work
*/
class Program {

    // global variable
    public static int variableX = 25;

    static void localVariable() {
        // this shows what happens with local variables
        int variableX = 10;
        int variableY = 30;
        int variableZ;

        variableX = variableX + 1;
        variableZ = variableX + variableY;

        Console.WriteLine ($"Local variableX, variableY, variableZ: {variableX} + {variableY} =  {variableZ}");
    }

    static void globalVariable() {
        // this shows what happens with global variables
        int variableY = 30;
        int variableZ;

        variableX = variableX + 1;
        variableZ = variableX + variableY;

        Console.WriteLine ($"Local variableX, variableY, variableZ: {variableX} + {variableY} =  {variableZ}");
    }

    public static void Main (string[] args) {
        // this function calls local and global
        localVariable();
        globalVariable();

        Console.WriteLine ("\nDone.");
    }
}
