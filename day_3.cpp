#include <iostream>
#include <vector>

// Day 3: Understanding type aliases and demonstrating their use. I will also be understanding basic arithmetic operations.
// It is understood that the keyword 'using' is more popular to use than 'typedef' due to its simplicity and ease of use with templates.

//typedef std::vector<std::pair<std::string, int>> pairlist_t; 
typedef std::string string_t; // Type alias for std::string
using num = int; // Type alias for int

int main() {

    int sheep = 5;

    //sheep = sheep +1;  Incrementing the number of sheep by 1
    //sheep +=1; Another way to increment the number of sheep by 1
    sheep++; // Another way to increment the number of sheep by 1, this only works if adding by 1 to the variable.

    std::cout << "Number of sheep: " << sheep << '\n';

    int chickens = 74;

    //chickens = chickens -1; // Decrementing the number of chickens by 1
    //chickens -=1; Another way to decrement the number of chickens by 1
    chickens--; // Another way to decrement the number of chickens by 1, this only works if subtracting by 1 from the variable.

    std::cout << "Number of chickens: " << chickens << '\n';

    int pigs = 3;

    //pigs = pigs * 2; // Doubling the number of pigs
    pigs *= 2; // Another way to double the number of pigs

    std::cout << "Number of pigs:" << pigs << '\n';

    int cows = 6;

    //cows = cows /2;  Halving the number of cows
    cows /=2; // Another way to halve the number of cows

    std::cout << "Number of cows: " << cows << '\n';

    int remainder = cows % 2; // This finds the remainder when cows are divided by 2. 
                              // The modulus operator is useful if you want to find out if a number is odd or even.
    std::cout << "Remainder when cows are divided by 2: " << remainder << '\n';

    int totalAnimals = sheep + chickens + pigs + cows;
    std::cout << "Total number of animals: " << totalAnimals << '\n';

    totalAnimals = sheep - chickens + pigs * cows; // Use of multiple arithmetic operations.
    std::cout << "Total number of animals: " << totalAnimals << '\n';



    string_t name = "Taariq"; // Using the type alias for string
    num age = 22;

    std::cout << name << '\n';
    std::cout << name << " is " << age << " years old." << '\n';


    return 0;
}