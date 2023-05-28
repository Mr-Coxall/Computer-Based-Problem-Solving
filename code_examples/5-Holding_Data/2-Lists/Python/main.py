#!/usr/bin/env python3
"""
Created by: Mr. Coxall
Created on: Sep 2020
This module program uses a list
"""


def main() -> None:
    """The main() this function uses a list, returns None."""

    # input
    words = []
    temp_word = "Go"

    # input
    print("Please enter 1 word at a time. Enter STOP to end.")

    while temp_word.upper() != "STOP":
        temp_word = input("Enter a word: ")
        words.append(temp_word)

    words.pop()  # remove the "Stop" that was added
    print("")

    print("Here are the words reversed:")
    for _ in range(0, len(words)):
        print(words.pop())


    print("\nDone.")


if __name__ == "__main__":
    main()
