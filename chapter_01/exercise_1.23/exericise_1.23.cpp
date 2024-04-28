#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, book_sum;
    int book_occurrence = 1;
    std::cout << "Enter the read ISBN of book. Ex.: 0-201-70353-X 4 24.99" << std::endl; //0-201-70354-X 4 24.99
    if(std::cin >> book)
    {
        std::cout << "There are " << book_occurrence << " transactions of ISBN " << book.isbn() << std::endl;
        while (std::cin >> book_sum)
        {
            if(book.isbn() == book_sum.isbn())
            {
                book_occurrence++;
            }
            std::cout << "There are " << book_occurrence << " transactions of ISBN " << book.isbn() << std::endl;
        }
    }
    return 0;
}