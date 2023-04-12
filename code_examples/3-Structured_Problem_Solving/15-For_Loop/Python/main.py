#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a while loop
"""


def main() -> None:
    """The main() this function uses a while loop, returns None."""

    # input
    positive_integer = int(input("Enter how many times to repeat: "))
    print("")

    # process & output
    for loop_counter in range(positive_integer):
        print("{0} time through loop.".format(loop_counter))

    print("\nDone.")


if __name__ == "__main__":
    main()
