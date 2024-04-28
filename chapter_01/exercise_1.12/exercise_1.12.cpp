#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
        std::cout << "count: " << i << std::endl;
    }
    std::cout << "SUM: " << sum << std::endl;
    
    return 0;
}