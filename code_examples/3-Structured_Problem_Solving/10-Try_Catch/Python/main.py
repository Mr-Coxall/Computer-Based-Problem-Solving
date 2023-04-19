#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module checks for a runtime error
"""


def main() -> None:
    """The main() function checks for a runtime error, returns None."""

    # input
    integer_as_string = input("Enter an integer: ")

    # process & output
    try:
        integer_as_number = int(integer_as_string)
    except ValueError:
        print(f"The error was {ValueError}.")
    else:
        print(f"You entered: {integer_as_number}.")
    finally:
        print("Thanks for playing.")

    print("\nDone.")


if __name__ == "__main__":
    main()
