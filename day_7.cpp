#include <iostream>

// Day7: Using the ternary operator as well as logical operators with various conditions.

int main() {

    int dragons;
    int knights;

    std::cout<<"How many dragons are there? ";
    std::cin >> dragons;

    std::cout<<"How many knights are there? ";
    std::cin >> knights;

    (knights/dragons) % 2  && dragons < 10 ? 
        std::cout << "The knights can fight the dragons.\n" : 
        std::cout << "There are not enough knights to fight the dragons.\n";


    int temp;
    bool isRaining;
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp;


    std::cout << "Is it raining (1 for yes, 0 for no)? ";
    std::cin >> isRaining;

    (temp < 30 || isRaining) ?
        std::cout << "The flower will bloom.\n" :
        std::cout << "The flower will not bloom.\n";
    return 0;
}