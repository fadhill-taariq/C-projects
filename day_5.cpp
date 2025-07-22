#include <iostream>
#include <cmath>

// Day 5: Creating a very simple hypotenuse calculator using the Pythagorean theorem.

int main() {

    double a, b, c;

    std::cout << "Enter Side A: ";
    std::cin >> a;

    std::cout << "Enter Side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Length of Hypotenuse: " << c << '\n';

    return 0;
}