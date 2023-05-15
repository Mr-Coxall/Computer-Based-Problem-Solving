#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses an array
"""


def main():
    """this function uses an array"""

    student_marks = []

    # input
    for loop_counter in range(0, 5):
        a_single_mark = int(input("Enter a mark (percentage): "))
        student_marks.append(a_single_mark)
    print("")

    print("Here are the 5 marks:")

    for loop_counter in range(0, 5):
        print(f"{student_marks[loop_counter]}% ", end="")

    print("")
    print("\nDone.")


if __name__ == "__main__":
    main()
