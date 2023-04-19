#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module checks if there is over 30 students
"""


from constants import MAX_STUDENT_NUMBER


def main() -> None:
    """The main() function checks if over 30 students, returns None."""

    # input
    number_of_students = int(input("Enter the number of students: "))

    # process and output
    if number_of_students > MAX_STUDENT_NUMBER:
        print("Too many students!")
    else:
        print("Not too many students.")

    print("\nDone.")


if __name__ == "__main__":
    main()
