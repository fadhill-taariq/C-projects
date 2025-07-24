#include <iostream>

// Day 6: Creating a very simple calculator that uses the four basic operators and displays the result. 
// This will be utilising a switch statement to complete the operation based on the operator input by the user.

int main() {

    char op;
    double num1, num2, result;

    std::cout << "****** Simple Calculator ******" << '\n';

    std::cout << "Enter the operator you wouldlike to use (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << '\n';
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                std::cout << num1 << " / " << num2 << " = " << result << '\n';
            } 
            else{
                std::cout << "Unable to divide by zero." << '\n';
            }
            break;
        default:
            std::cout << "Invalid operator. Please use one of the following: +, -, *, /" << '\n';
            break;
        }
    std::cout << "*******************************" << '\n';

    return 0;
}
    