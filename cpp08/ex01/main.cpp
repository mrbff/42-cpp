#include "Span.hpp"

int main(int ac, char **av)
{
    Span sp = Span(5);

//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl << std::endl;
    
//    sp.addNumber(11);

    if (ac != 2)
        return 1;
    
    srand(time(NULL));
    Span sp2(std::atoi(av[1]));
    unsigned int sp2Size = sp2.getSize();

    for (unsigned int i = 0; i < sp2Size; i++)
        sp2.addNumber(rand());
    
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl << std::endl;

    for (unsigned int i = 0; i < sp2Size; i++)
        std::cout << sp2[i] << " ";
    std::cout << std::endl;

    return 0;
}