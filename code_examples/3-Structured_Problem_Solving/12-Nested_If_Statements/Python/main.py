#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a nested if statement
"""


def main() -> None:
    """The main() function uses a nested if statement, returns None."""

    # input
    cookies_sold = int(input("Enter the number of boxes of cookies you sold: "))
    print("")

    # process & output
    if cookies_sold >= 20:
        if cookies_sold < 30:
            print("You get a small prize.")
        else:
            print("You get a large prize.")
    else:
        print("No prize.")

    print("\nDone.")


if __name__ == "__main__":
    main()
