#include "Base.hpp"

Base::~Base() {}

Base * generate(void)
{
    static int i;
    i++;
    srand(time(0) + i);
    int n = rand() % 3;
    
    switch (n)
    {
        case 0:
        {
            std::cout << "GEN A" << std::endl;
            return (new A);
        }
        case 1:
        {
            std::cout << "GEN B" << std::endl;
            return (new B);
        }
        case 2:
        {
            std::cout << "GEN C" << std::endl;
            return (new C);
        }
        default:
            return (NULL);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "freebase" << std::endl;
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch(const std::exception& e) {}

    try {
        B& b = dynamic_cast< B& >( p );
        std::cout << "B" << std::endl;
        (void)b;
        return ;
    }
    catch( const std::exception& e) {}
    
    try {
        C& c = dynamic_cast< C& >( p );
        std::cout << "C" << std::endl;
        (void)c;
        return ;
    }
    catch( const std::exception& e ) {}

    std::cout << "freebase" << std::endl;
}