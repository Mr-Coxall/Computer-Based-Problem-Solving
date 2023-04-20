#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses a nested loop
"""


def main() -> None:
    """The main() function uses a nested loop, returns None."""

    # process & output
    for counter1 in range(10):
        for counter2 in range(10):
            print(f"Odometer: {counter1}{counter2}")

    print("\nDone.")


if __name__ == "__main__":
    main()
