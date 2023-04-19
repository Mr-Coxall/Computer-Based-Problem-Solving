#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a continue statement
"""


def main() -> None:
    """The main() function uses a continue statement, returns None."""

    # input
    positive_integer = int(input("Enter a count-down number (ex: 10): "))
    print("")

    # process & output
    while positive_integer >= 0:
        # yes, this is the exception on placing the counter at the top
        # if you did not, then there would be an infinit loop
        positive_integer -= 1
        if positive_integer + 1 == 5:
            continue
        print(f"Current variable value: {positive_integer + 1}")

    print("\nDone.")


if __name__ == "__main__":
    main()
