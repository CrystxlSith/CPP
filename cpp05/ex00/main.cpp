#include "Bureaucrat.hpp"

int main(void)
{
    std::string name = "someone";
    try
    {
        Bureaucrat bbl(name, 150);
        std::cout << bbl << std::endl;
        bbl.incrementGrade();
        std::cout << bbl << std::endl;
        bbl.decrementGrade();
        std::cout << bbl << std::endl;
        bbl.decrementGrade();
        std::cout << bbl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat bbl(name, 1);
        std::cout << bbl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat bbl(name, 0);
        std::cout << bbl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
