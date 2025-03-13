// copyright (c) 2025 Tony G All rights reserved
//
// created by Tony G
// created on 2025-03-13
// calculates circumference and area based on user imput

#include <cmath>
#include <iostream>

int main() {
    float radius;
    std::cout << "Please enter radius length (cm): ";
    std::cin >> radius;
    std::cout << "Circumference: " << (2 * M_PI * radius) << std::endl;
    std::cout << "Area: " << (M_PI * pow(radius, 2)) << std::endl;
}
