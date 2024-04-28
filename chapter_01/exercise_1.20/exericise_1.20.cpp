#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cout << "Enter the read ISBN, number of copies sold, and sales price. Ex.: 0-201-70353-X 4 24.99" << std::endl;
    std::cin >> book;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << "The number of copies sold, total revenue, and average price is: " << std::endl;
    std::cout << book << std::endl;
    return 0;
}