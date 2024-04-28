#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl; // prompt user to enter two numbers
    int v1 = 0, v2 = 0; // variables to hold the input we read
    std::cin >> v1 >> v2; // read input
    std::cout << "The multiplication of " << v1 << " and " << v2 << " is: " << v1 * v2 << std::endl; 
    return 0;
}