#include <iostream>

int main()
{
    int firstNumber, secondNumber;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> firstNumber;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> secondNumber;

    int sum = 0, val = 1;

    if (firstNumber < secondNumber)
    {
        val = firstNumber;
        while (val <= secondNumber)
        {
            sum += val; // assigns sum + val to sum
            ++val; // add 1 to val
        }
        std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;
    }
    else
    {
        std::cout << "First Number: '" << firstNumber << "' is bigger than Second Number: '" << secondNumber << "' !!!" << std::endl;
    }
    return 0;
}