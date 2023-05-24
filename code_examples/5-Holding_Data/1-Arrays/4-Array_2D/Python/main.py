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
    """The sum_of_numbers() function calculates the sum of numbers in a 2D list, returns the sum as int."""

    total = 0

    for row_value in array_of_numbers:
        for single_value in row_value:
            total += single_value

    return total


def main() -> None:
    """The main() function just calls other functions, returns None."""

    a_2d_list = []
    sum_answer = 0

    # input
    rows = int(input("How many row would you like: "))
    columns = int(input("How many columns would you like: "))

    for _ in range(0, rows):
        temp_column = []
        for _ in range(0, columns):
            a_random_number = random.randint(0, 9)
            temp_column.append(a_random_number)
            print(f"{a_random_number} ", end="")
        a_2d_list.append(temp_column)
        print("")

    sum_answer = sum_of_numbers(a_2d_list)

    # output
    print(f"\nThe sum of all the numbers is: {sum_answer}")

    print("\nDone.")


if __name__ == "__main__":
    main()
