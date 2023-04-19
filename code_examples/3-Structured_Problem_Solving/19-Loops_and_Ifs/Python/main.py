#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module is the Fizz Buzz program
"""


def main() -> None:
    """The main() function is the Fizz Buzz program, returns None."""

    # process & output
    for counter in range(1, 101):
        if counter % 3 == 0 and counter % 5 == 0:
            print("Fizz-Buzz")
        elif counter % 3 == 0:
            print("Fizz")
        elif counter % 5 == 0:
            print("Buzz")
        else:
            print(counter)

    print("\nDone.")


if __name__ == "__main__":
    main()
