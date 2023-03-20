#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module checks checks a student's grade
"""


def main() -> None:
    """The main() this function checks a student's grade, returns None."""

    # input
    grade = input("Enter your grade: ")

    # process & output
    match grade:
        case "A":
            print("Excellent!")
        case "B":
            print("Good job!")
        case "C":
            print("Average.")
        case "D":
            print("Poor.")
        case "F":
            print("Fail.")
        case _:
            print("Invalid grade.")

    print("\nDone.")


if __name__ == "__main__":
    main()
