#!/usr/bin/env python3

# Created by: Mr. Coxall
# Created on: Sep 2020
# This program shows declaring constants

import constants


def main():
    # then in the main program
    print("Room: " + str(constants.ROOM_NUMBER))
    print(str(constants.HST) + "%")
    print(constants.COUNTRY)

    print("\nDone.")


if __name__ == "__main__":
    main()
