#include <iostream>

int main() {

    // Functionality: Print "Hello World!" to the console.

    std::cout << "Hello, World!" << '\n';



    // Functionality: Define a class Solution with a method to sum two integers.
    // The method takes two integers as parameters and returns their sum.


    class Solution {
    public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
    };
    int num1 = 12;
    int num2= 5;

    Solution sol;
    std::cout << int(sol.sum(num1, num2)) << '\n';

    return 0;

}