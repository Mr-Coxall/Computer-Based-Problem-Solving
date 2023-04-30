#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses user defined functions
"""


def calculate_area() -> None:
    """The calculate_area() function calculates area of a rectangle, returns None."""

    # input
    length = int(input("Enter the length of a rectangle (cm): "))
    width = int(input("Enter the width of a rectangle (cm): "))

    # process
    area = length * width

    # output
    print(f"The area is {area} cm²")
    print("")


def calculate_perimeter() -> None:
    """The calculate_perimeter() function calculates perimeter of a rectangle, returns None."""

    # input
    length = int(input("Enter the length of a rectangle (cm): "))
    width = int(input("Enter the width of a rectangle (cm): "))

    # process
    perimeter = 2 * (length + width)

    # output
    print(f"The perimeter is {perimeter} cm")
    print("")


def main() -> None:
    """The main() function just calls other functions, returns None."""

    # call functions
    calculate_area()
    calculate_perimeter()

    print("\nDone.")


if __name__ == "__main__":
    main()
