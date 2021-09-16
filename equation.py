#!/usr/bin/env python3

# Created by: Seti Ngabo
# Created on: Sept 2021
# This program adds the first number and the second number
#   with user input


def main():
    # input
    first_number = int(input("Enter first number (integer): "))
    second_number = int(input("Enter second number (integer): "))

    # process
    answer = first_number + second_number

    # output
    print("{0} + {1} = {2} ".format(first_number, second_number, answer))
    print("")
    print("Done.")


if __name__ == "__main__":
    main()
