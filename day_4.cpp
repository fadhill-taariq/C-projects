#include <iostream>

// Day 4: Understanding type conversion and accepting user input.

int main() {

    // int x = 7.9;
    // std::cout << x;
    // This is an example of implicit type conversion as 7.9 has been converted from a double to an int in order to be stored in the variable x.

    double y = (int) 7.9; // Explicit type conversion from double to int
    std::cout << "y = " << y;

    std::string name;
    std::cout << "\nEnter your name: ";
    std::getline(std::cin, name); //Allowing user input for name


    int test_score;
    std::cout << "\nEnter your test score: ";
    std::cin >> test_score; // Allowing user input for test score


    int questions = 10;
    double percentage = (double)test_score / questions * 100; // Explicit type conversion
    std::cout <<"Hello "  << name << ", your score is " << percentage << "%";


    return 0;
}