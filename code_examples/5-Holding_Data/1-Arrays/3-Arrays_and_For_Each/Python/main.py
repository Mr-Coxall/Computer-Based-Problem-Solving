#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses an array as a parameter
"""


import random
from typing import List


# in python an array is passed by reference to a function
def sum_of_numbers(array_of_numbers: List[int]) -> int:
    """The sum_of_numbers() function calculates the sum of numbers in a list using For ... Each, returns the sum as int."""

    total = 0

    for a_single_number in array_of_numbers:
        total += a_single_number

    return total


def main() -> None:
    """The main() function just calls other functions, returns None."""

    random_numbers = []
    sum = 0

    # input
    for loop_counter in range(0, 10):
        a_single_number = random.randint(1, 100)
        random_numbers.append(a_single_number)
        print(f"The random number is: {a_single_number}")
    print("")

    # process
    sum = sum_of_numbers(random_numbers)

    # output
    print(f"The sum of all the numbers is: {sum}")

    print("\nDone.")


if __name__ == "__main__":
    main()
