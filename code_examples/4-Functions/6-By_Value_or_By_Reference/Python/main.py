#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module shows checks if over 30 students
"""


from constants import MAX_STUDENT_NUMBER


def main() -> None:
    """The main() this function checks if over 30 students, returns None."""

    # input
    number_of_students = int(input("Enter the number of students: "))

    # process
    if number_of_students > MAX_STUDENT_NUMBER:
        # output
        print("Too many students!")

    print("\nDone.")


if __name__ == "__main__":
    main()
