#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a compound boolean statement
"""


def main() -> None:
    """The main() this function uses a compound boolean statement, returns None."""

    # input
    term_mark_str = input("Enter term mark (as %): ")
    project_mark_str = input("Enter project mark (as %): ")
    print("")

    # process & output
    try:
        term_mark = int(term_mark_str)
        project_mark = int(project_mark_str)
    except ValueError:
        print("Invalid input.")
    else:
        if term_mark >= 50 and project_mark >= 50:
            print("You passed the course.")
        else:
            print("You did not pass the course.")

    print("\nDone.")


if __name__ == "__main__":
    main()
