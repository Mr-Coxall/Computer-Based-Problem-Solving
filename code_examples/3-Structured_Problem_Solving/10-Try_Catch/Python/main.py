#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a try statement
"""


def main() -> None:
    """The main() this function uses a try statement, returns None."""

    # input
    integer_as_string = input("Enter an integer: ")

    # process & output
    try:
        integer_as_number = int(integer_as_string)
    except ValueError:
        print("This was not an integer.")
    else:
        print(f"The integer was: {integer_as_number}.")
    finally:
        print("Thanks for playing.")

    print("\nDone.")


if __name__ == "__main__":
    main()
