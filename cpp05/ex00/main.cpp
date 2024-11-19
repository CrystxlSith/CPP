#include "Bureaucrat.hpp"

int main(void)
{
    std::string name = "someone";
    try
    {
        Bureaucrat bbl(name, 150);
        bbl.incrementGrade();
        bbl.decrementGrade();
        bbl.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat bbl(name, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
