#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module uses an associative array
"""


def main() -> None:
    """The main() this function function uses an associative array, returns None."""

    airports = {}
    some_info = {'item1': 1,
                'item2': 2,
                }

    # adding items
    airports['YYZ'] = "Toronto Pearson"
    airports['YOW'] = "Ottawa Canada"
    airports['DUB'] = "Dublin Ireland"
    airports['LHR'] = "London Heathrow"

    # input & process

    print("All the airports:")
    for key, value in airports.items():
        print(f"The airport code is {key} for {value}.")
    print("")

    airport_name = input("Type in an airport code: ")
    if airport_name in airports:
        print(f"The name of the airport you chose is {airports[airport_name]}.")
    else:
        print("That airport is not in the airport's dictionary.")

    print("\nDone.")


if __name__ == "__main__":
    main()
