#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;    

    MutantStack<int> s(mstack);
    MutantStack<int>::iterator sit = s.begin();
    MutantStack<int>::iterator site = s.end();
    while (sit != site)
    {
        std::cout << *sit << " ";
        ++sit;
    }
    std::cout << std::endl;
    
    std::stack<int> st(s);
    
    return 0;
}