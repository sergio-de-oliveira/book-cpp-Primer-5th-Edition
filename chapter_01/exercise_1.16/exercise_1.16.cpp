#include <iostream>

int main()
{
    int sum = 0, value = 0;
    std::cout << "Enter a integer value to sum and do a End-of-File (windows: CTRL+Z or UNIX: CTRL+D)" << std::endl;

    while (std::cin >> value)
    {
        sum += value; // equivalent to sum = sum + value
    }
    std::cout << "The SUM is: " << sum << std::endl;

    return 0;
}