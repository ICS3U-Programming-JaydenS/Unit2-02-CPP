// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: February 28, 2025
// Given user input, the circumference of a circle is calculated.

#include <cmath>
#include <iostream>

int main() {
    // First I determine my constants
    const float TAU = 6.28;
    // Then declare my variables
    int radius, circumference;
    std::cout << "Enter radius of the rectangle (cm): \n";
    std::cin >> radius;
    // Code then displays information
    std::cout << "Circumference is: " << (TAU * radius) << "cm\n";
}
