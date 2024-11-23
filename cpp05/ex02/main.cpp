#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialForm.hpp"

int main(void)
{
    std::string name = "someone";
    std::string formName = "Death certificate";
    try
    {
        Bureaucrat bbl(name, 5);
        PresidentialForm       formy(bbl);
        formy.beSigned(bbl);
        formy.execute(bbl);
        std::cout << bbl << std::endl;
        std::cout << formy << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
