// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti ngabo
// Created on: Sept 2021
// This program shows the equation
// with user input

#include <iostream>
#include <cmath>

int main() {
    // this function adds first number and second number
    int first_number;
    int second_number;
    int answer;


    // input
    std::cout << "Enter first number (integer): ";
    std::cin >> first_number;
    std::cout << "Enter second number (integer): ";
    std::cin >> second_number;


    // process
    answer = first_number + second_number;

    // output
    std::cout << "" << std::endl;
    std::cout << answer << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
