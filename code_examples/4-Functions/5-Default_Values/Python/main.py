#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module prints out your name, using default function parameters
"""


def full_name(first_name: str, last_name: str, middle_name: str | None = None) -> str:
    """The full_name() function calculates the full formal name, returns str."""
    # return the full formal name

    full_name = first_name
    if middle_name is not None:
        full_name = full_name + " " + middle_name[0] + "."
    full_name = full_name + " " + last_name

    return full_name


def main() -> None:
    """The main() function gets a users name and prints out their formal name, returns None."""

    middle_name = None

    # input & process
    first_name = input("Enter your first name: ")
    question = input("Do you have a middle name? (y/n): ")
    if question.upper() == "Y" or question.upper() == "YES":
        middle_name = input("Enter your middle name: ")
    last_name = input("Enter your last name: ")

    if middle_name is not None:
        name = full_name(first_name, last_name, middle_name)
    else:
        name = full_name(first_name, last_name)

    # output
    print(f"\nYour formal name is {name}.")

    print("\nDone.")


if __name__ == "__main__":
    main()
