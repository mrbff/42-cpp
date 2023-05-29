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

        void    addNumber(int num);

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        
        class NotEnoughSpace : public std::exception
        {
            virtual const char* what() const throw() { return ("Not enough space in the span to add the range."); }
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

        std::vector<int> _container;
        std::vector<int> _sorted;
};