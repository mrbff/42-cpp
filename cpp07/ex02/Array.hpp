#pragma once
#include <iostream>

template <typename T>
class Array {
    public:
        Array() :  _size(0), _arr(new T()) {}
        Array(size_t n)  : _size(n), _arr(new T[n]) {}
        
        Array(Array const &ref) : _size(ref._size), _arr(new T[ref._size])
        {
            for (size_t i = 0; i < _size; i++)
                _arr[i] = ref._arr[i];
        }
        
        ~Array()
        {
            delete [] _arr;
        }

        Array &operator=(Array const &ref)
        {
            delete [] _arr;
            _arr = new T[ref._size];
            _size = ref._size;
            
            for (size_t i = 0; i < _size; i++)
                _arr[i] = ref._arr[i];
            
            return *this;
        }

        T& operator[](size_t i) const
        {
            if ( i >= _size )
                throw OutOfBoundsException();
            return _arr[i];
        }

        size_t  size() const
        {
            return _size;
        }
    
        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Index is out of bounds";
                }
        };
    
    private:
        size_t  _size;
        T   *   _arr;
};

template <typename T>
std::ostream& operator<<( std::ostream& os, const Array<T>& arr)
{
    size_t size = arr.size();
    for (size_t i = 0; i < size; i++)
        os << arr[i] << " ";
    return os;
}