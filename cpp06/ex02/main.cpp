#include "Base.hpp"

int main()
{
    Base*   a = generate();
    Base*   b = generate();
    Base*   c = generate();
    Base*   d = generate();
    Base*   freebase = new (Base);

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;

    std::cout << "c* = "; identify( c );
    std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    std::cout << "d* = "; identify( d );
    std::cout << "d& = "; identify( *d ); std::cout << std::endl;

    std::cout << "freebase* = "; identify(freebase);
    std::cout << "freebase& = "; identify(*freebase); std::cout << std::endl;

    delete a;
    delete b;
    delete c;
    delete d;
    delete freebase;

    return (0);
}