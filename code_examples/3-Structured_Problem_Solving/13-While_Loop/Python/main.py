#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a while loop
"""


def main() -> None:
    """The main() function uses a while loop, returns None."""
    counter = 0

    # input
    positive_integer = int(input("Enter how many times to repeat: "))
    print("")

    # process & output
    while counter < positive_integer:
        print(f"{counter} time(s) through the loop.")
        counter = counter + 1

    print("\nDone.")


if __name__ == "__main__":
    main()
