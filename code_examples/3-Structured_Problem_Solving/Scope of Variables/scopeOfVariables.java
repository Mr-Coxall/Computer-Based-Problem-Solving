// Copyright (c) Jonathan Pasco-Arnone All rights reserved.
//
// Created by: Jonathan Pasco-Arnone
// Created on: Mar 2022
// This program shows how local and global variables work

class Main {

    /**
    * Global variable
    */
    private static int variableX = 25;

    /**
    * This shows what happens with local variables
    */
    public static void localVariable() {
        int variableX = 10;
        int variableY = 30;
        int variableZ = variableX + variableY;
        System.out.println("Local variableX, variableY, variableZ: "
            + variableX + " + " + variableY + " = " + variableZ);
        
    }

    /**
    * This shows what happens with global variables    */
    public static void globalVariable() {
        variableX = variableX + 1;
        int variableY = 30;
        int variableZ = variableX + variableY;
        System.out.println("Global variableX. Local variableY, variableZ: "
            + variableX + " + " + variableY + " = " + variableZ);
        
    }

    /**
    * This function calls local and global
    */
    public static void main(String[] args) {
        localVariable();
        globalVariable();
    }
}
