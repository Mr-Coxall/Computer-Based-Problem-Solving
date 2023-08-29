#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a function by reference
"""


def add_one(someVariable: List[int]) -> None:
    """The add_one() function adds 1, by reference, returns str."""
    # in python the only way to pass by reference is to pass the whole list

    someVariable[0] = someVariable[0] + 1


def main() -> None:
    """The main() this function gets a number and calls the add_one function, returns None."""
    someNumber = []

    # input
    temp_var = int(input("Enter a number: "))
    someNumber.append(temp_var)

    # process
    add_one(someNumber)

    # output
    print(f"The number plus one is: {someNumber[0]}")

    print("\nDone.")


if __name__ == "__main__":
    main()
