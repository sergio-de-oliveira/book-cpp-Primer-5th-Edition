#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, book_sum;
    std::cout << "Enter the read ISBN of book. Ex.: 0-201-70353-X 4 24.99" << std::endl;
    while (std::cin >> book)
    {
        book_sum += book;
    }
    std::cout << "The number of copies sold, total revenue, and average price of book is: " << book_sum << std::endl;
    return 0;
}