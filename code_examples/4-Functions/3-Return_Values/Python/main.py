#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module calculates the area of circle
"""

import math

def calculate_area(radius: int) -> float:
    """The calculate_area() function calculates the area of circle, returns None."""

    # process
    area = math.pi * radius ** 2

    return area


def main() -> None:
    """The main() function just calls other functions, returns None."""

    # input
    radius = int(input("Enter the radius of a circle (cm): "))
    print("")

    # call functions
    area = calculate_area(radius)

    # output
    print(f"The area is {area:.2f} cm²")

    print("\nDone.")


if __name__ == "__main__":
    main()
