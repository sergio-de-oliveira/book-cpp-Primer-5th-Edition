#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, book_sum;
    int book_occurrence = 1;
    std::cout << "Enter the read ISBN of book. Ex.: 0-201-70353-X 4 24.99" << std::endl; //0-201-70354-X 4 24.99
    if(std::cin >> book)
    {
        book_sum = book;
        while (std::cin >> book)
        {
            // book_sum = book_sum + book_sum;
            if(book.isbn() == book_sum.isbn())
            {
                book_occurrence++;
                book_sum += book;
            }
            else
            {
                std::cout << "\n" << "ISBN: " << book_sum.isbn() << std::endl;
                std::cout << "Occurrences: " << book_occurrence << std::endl;
                std::cout << "Average price: " << book_sum.avg_price() << "\n" << std::endl;
                book_occurrence = 1;
                book_sum = book;
            }            
        }
        std::cout << std::endl;
        std::cout << "ISBN: " << book_sum.isbn() << std::endl;
        std::cout << "Occurrences: " << book_occurrence << std::endl;
        std::cout << "Average price: " << book_sum.avg_price() << "\n" << std::endl;
    }
    return 0;
}