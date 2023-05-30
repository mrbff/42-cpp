#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
    public:
        Span(unsigned int n);
        Span(Span const & ref);
        ~Span();

        Span & operator=(const Span & ref);

        unsigned int operator[](unsigned int i) const;

        void    addNumber(int num);

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        unsigned int getSize() const;

        class OutOfBounds : public std::exception
        {
            virtual const char* what() const throw() { return ("Index is out of bounds."); }
        };

        class Full : public std::exception
        {
            virtual const char* what() const throw() { return ("Span is full."); }
        };

        class CantSpan : public std::exception
        {
            virtual const char* what() const throw() { return ("Span have not enough values to do a span."); }
        };
    
    private:
        Span();

        unsigned int        _size;
        std::vector<int>    _container;
        std::vector<int>    _sorted;
};