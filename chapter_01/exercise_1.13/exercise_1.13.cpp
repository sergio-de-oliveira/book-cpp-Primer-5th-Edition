#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    for (val = 0; val <= 10; val++)
    {
        sum += val; // assigns sum + val to sum
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}