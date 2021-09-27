// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate leap year

#include <iostream>
#include <string>

int main() {
    // This Program calculate leap year

    std::string userString;
    int userYear;

    // input
    std::cout << "Please enter the year: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // process
    try {
        userYear = std::stoi(userString);
        if (userYear % 400 != 0) {
            if (userYear % 100 != 0) {
                if (userYear % 4 != 0) {
                    // output
                    std::cout << "It is a common year." << std::endl;
                } else {
                    // output
                    std::cout << "It is a leap year." << std::endl;
                }
            } else {
                // output
                std::cout << "It is a common year." << std::endl;
            }
        } else {
            // output
            std::cout << "It is a leap year." << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << userString << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
