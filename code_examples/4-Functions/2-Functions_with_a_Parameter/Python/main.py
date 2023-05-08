#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module calculates the area of circle
"""

import math

def calculate_area(radius: int) -> None:
    """The calculate_area() function calculates the area of circle, returns None."""

    # process
    area = math.pi * radius ** 2

    # output
    print(f"The area is {area} cm²")


def main() -> None:
    """The main() function just calls other functions, returns None."""

    # input
    radius = int(input("Enter the radius of a circle (cm): "))
    print("")

    # call functions
    calculate_area(radius)

    print("\nDone.")


if __name__ == "__main__":
    main()
