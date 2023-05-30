#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(Span const & ref) : _size(ref._size), _container(ref._container), _sorted(ref._sorted) {}

Span::~Span() {}

Span &  Span::operator=(const Span & ref)
{
    _size = ref._size;
    _container = ref._container;
    _sorted = ref._sorted;
    
    return *this;
}

void    Span::addNumber(int num)
{
    if (_size <= _container.size())
        throw Span::Full();
    _container.push_back(num);
    _sorted.insert(std::upper_bound(_sorted.begin(), _sorted.end(), num), num);//insert in the right order
}

unsigned int Span::shortestSpan() const
{
    if (_container.size() <= 1)
        throw Span::CantSpan();
    
    unsigned int res = 0 - 1;
    unsigned int tmp;
    unsigned int size = _sorted.size();
    
    for (unsigned int i = 0; i < size; i++)
    {
        tmp = std::abs(_sorted[i + 1] - _sorted[i]);
        if (tmp < res)
            res = tmp;
    }

    return (res);
}

unsigned int Span::longestSpan() const
{
    if (_container.size() <= 1)
        throw Span::CantSpan();
    
    return _sorted.back() - _sorted.front();
}

unsigned int Span::getSize() const
{
    return _size;
}

unsigned int Span::operator[](unsigned int i) const
{
    if (i >= _container.size())
        throw Span::OutOfBounds();
    return _container[i];
}