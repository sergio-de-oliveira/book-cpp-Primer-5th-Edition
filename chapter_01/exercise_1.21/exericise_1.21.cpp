#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    // read ISBN, number of copies sold, and sales price
    std::cout << "Enter the read ISBN, number of copies sold, and sales price of book 1. Ex.: 0-201-70353-X 4 24.99" << std::endl;
    std::cin >> book1;
    std::cout << "Enter the read ISBN, number of copies sold, and sales price of book 2. Ex.: 0-201-70353-X 4 24.99" << std::endl;
    std::cin >> book2;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << "The number of copies sold, total revenue, and average price of book 1 is: " << book1 << std::endl;
    std::cout << "The number of copies sold, total revenue, and average price of book 2 is: " << book2 << std::endl;
    return 0;
}