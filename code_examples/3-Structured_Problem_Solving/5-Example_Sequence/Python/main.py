#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module calculates total from subtotal and tax
"""

import constants


def main() -> None:
    """The main() function calculates total from subtotal and tax, returns None."""

    # input
    sub_total = float(input("Enter the subtotal: $"))

    # process
    tax = sub_total * constants.HST
    total = sub_total + tax

    # output
    print("")
    print(f"The HST is ${tax:,.2f}.")
    print(f"The total cost is ${total:,.2f}.")

    print("\nDone.")


if __name__ == "__main__":
    main()
