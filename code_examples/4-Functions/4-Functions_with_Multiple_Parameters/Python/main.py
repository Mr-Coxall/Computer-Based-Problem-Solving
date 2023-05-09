#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module calculates area of a rectangle
"""


def calculate_area(length: int, width: int) -> int:
    """The calculate_area() function calculates area of a rectangle, returns int."""

    # process
    area = length * width

    # output
    return area


def main() -> None:
    """The main() function just calls other functions, returns None."""

    # input
    length_from_user = int(input("Enter the length of a rectangle (cm): "))
    width_from_user = int(input("Enter the width of a rectangle (cm): "))
    print("")

    # call functions
    area = calculate_area(width = width_from_user, length = length_from_user)

    # output
    print(f"The area is {area} cm²")

    print("\nDone.")


if __name__ == "__main__":
    main()
