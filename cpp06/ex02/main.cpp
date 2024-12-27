#include "Base.hpp"
#include <cstdlib>
#include <ctime>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate( void )
{
    int randomValue = rand() % 3;
    std::cout << randomValue << std::endl;
    if (randomValue == 0)
        return new A();
    else if (randomValue == 1)
        return new B();
    else
        return new C();
}

void    identify( Base* p )
{
    if (dynamic_cast<A*>(p))
        std::cout << "A type" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B type" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C type" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A &	a = dynamic_cast<A&>(p);
        std::cout << "A type" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &	b = dynamic_cast<B&>(p);
            std::cout << "B type" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &	c = dynamic_cast<C&>(p);
                std::cout << "C type" << std::endl;
                (void)c;
                
            }
            catch(const std::exception& e)
            {
                std::cerr << "Unknown type" << '\n';
            }
        }
    } 
}

int main( void )
{
    Base * base = generate();
    srand(static_cast<unsigned int>(time(0)));

    identify(base);
    identify(*base);

    return 0;
}
