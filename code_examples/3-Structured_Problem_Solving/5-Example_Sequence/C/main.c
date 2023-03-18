// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates total from subtotal and tax

#include <stdio.h>
#include <math.h>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.13;
    float tax;
    float subTotal;
    float total;

    //input
    printf("Enter the subtotal: $");
    scanf("%f", &subTotal);

    // process
    tax = + subTotal * HST;
    total = subTotal + tax;
    
    // output
    printf("\n");
    printf("The HST is: $%.2f.\n", tax);
    printf("The total cost is: $%.2f.\n", total);

    printf("\nDone.\n");
    return 0;
}
