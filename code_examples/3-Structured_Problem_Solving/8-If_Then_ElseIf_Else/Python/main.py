#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module checks a traffic light
"""


def main() -> None:
    """The main() function checks a traffic light, returns None."""

    # input
    light_color = input("Enter the color of the traffic light: ")

    # process and output
    if light_color == "red":
        print("Stop!")
    elif light_color == "yellow":
        print("Slow down!")
    elif light_color == "green":
        print("Go!")
    else:
        print("Not a valid color.")

    print("\nDone.")


if __name__ == "__main__":
    main()
