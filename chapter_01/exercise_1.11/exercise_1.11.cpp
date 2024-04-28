#include <iostream>

int main()
{
    std::cout << "Enter two integer numbers: " << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1;
    std::cin >> val2;
    while (val1 > val2) {
        std::cout << val1 << std::endl;
        --val1;
    }
    while (val1 <= val2) {
        std::cout << val1 << std::endl;
        ++val1;
    }
    return 0;
}