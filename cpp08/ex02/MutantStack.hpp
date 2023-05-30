#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack {
    public:
        MutantStack();
        MutantStack(MutantStack const & ref);
        ~MutantStack();

        MutantStack & operator=(const MutantStack & ref);

        bool                empty() const;
        size_type           size() const;
        value_type&         top();
        const value_type&   top() const;
        void                push (const value_type& val);
        void                pop();
        void                swap (MutantStack& x);

    private:
        std::stack<T>   _ms;
};