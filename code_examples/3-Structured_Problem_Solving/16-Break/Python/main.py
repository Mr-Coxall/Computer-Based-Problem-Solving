#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a break statement
"""


def main() -> None:
    """The main() function uses a break statement, returns None."""

    # input
    positive_integer = int(input("Enter how many times to repeat: "))
    print("")

    # process & output
    for loop_counter in range(positive_integer):
        print(f"{loop_counter} time through loop.")
        if loop_counter >= 5:
            break

    print("\nDone.")


if __name__ == "__main__":
    main()
