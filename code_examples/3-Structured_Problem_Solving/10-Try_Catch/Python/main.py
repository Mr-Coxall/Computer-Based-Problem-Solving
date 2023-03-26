#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module checks a student's grade
"""


def main() -> None:
    """The main() this function checks a student's grade, returns None."""

    # input
    grade = input("Enter grade mark as a single character(ex: A, B, ...): ")

    # process & output
    # NOTE: This will only work on >= Python 3.10
    match grade.upper():
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
