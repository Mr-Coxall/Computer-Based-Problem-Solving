#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses user defined functions
"""


def calculate_area(length: int, width: int) -> int:
    """The calculate_area() function calculates area of a rectangle, returns int."""

    # process
    area = length * width

    # output
    return area


def calculate_perimeter(length: int, width: int) -> int:
    """The calculate_perimeter() function calculates perimeter of a rectangle, returns int."""

    # process
    perimeter = 2 * (length + width)

    # output
    return perimeter


def main() -> None:
    """The main() function just calls other functions, returns None."""

    # input
    length = int(input("Enter the length of a rectangle (cm): "))
    width = int(input("Enter the width of a rectangle (cm): "))
    print("")

    # call functions
    area = calculate_area(length, width)
    perimeter = calculate_perimeter(length, width)

    # output
    print(f"The area is {area} cm²")
    print(f"The perimeter is {perimeter} cm")

    print("\nDone.")


if __name__ == "__main__":
    main()
