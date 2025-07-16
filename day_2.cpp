#include <iostream>

// Day 2: Understanding Namespaces in C++, as well as the use of constant variables.
// I will include an error in my code to demonstrate the use of namespaces and constants.


namespace first {
    int x = 4;
    double y = 9.8;
}
namespace second {
    int x = 19;
    double y = 3.243;
}

int main() {
    const int X = 10; // Local variable x
    double y = 5.5; // Local variable y

    int X = 28; // This will flag an error as X is a constant variable and cannot be redfined.
    std::cout << "Local x: " << X << ", Local y: " << y << '\n';
    std::cout << "First namespace x: " << first::x << ", First namespace y:" << first::y << '\n';
    std::cout << "Second namespace x: " << second::x << ", Second namespace y: " << second::y << '\n';

}