#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module calculates factorial
"""


def factorial(number: int) -> int:
    """ A recursive function that returns the factorial of a number"""
    if number == 1:
        return 1
    else:
        return number * factorial(number - 1)


def main():
    """this function gets user input"""

    # input
    user_input_int = int(input("Enter a positive integer: "))

    if user_input_int < 0:
        print("That was not a positive integer.")
    else:
        # call function
        factorial_answer = factorial(user_input_int)
        print(f"The factorial of {user_input_int} is {factorial_answer}")

    print("\nDone.")


if __name__ == "__main__":
    main()
