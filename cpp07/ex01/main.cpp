#include <iostream>
#include "iter.hpp"

#define SIZE 21

void toUp(char &c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
}

void subOne(int &n)
{
    n--;
}

int main()
{
    char test[SIZE] = "I'm an array of char";
    
    std::cout << test << std::endl;
    ::iter(test, SIZE, toUp);
    std::cout << test << std::endl;

    int test1[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        std::cout << test1[i];
    std::cout << std::endl;
    ::iter(test1, 5, subOne);
    for (int i = 0; i < 5; i++)
        std::cout << test1[i];
    std::cout << std::endl;
    return 0;
}