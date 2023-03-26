#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a compound boolean statement
"""


def main() -> None:
    """The main() this function uses a compound boolean statement, returns None."""


    # input
    term_mark = int(input("Enter term mark (as %): "))
    project_mark = int(input("Enter project mark (as %): "))
    print("")

    # process & output
    if term_mark >= 50 and project_mark >= 50:
        print("You passed the course.")
    else:
        print("You did not pass the course.")

    print("\nDone.")


if __name__ == "__main__":
    main()
