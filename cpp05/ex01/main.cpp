#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::string name = "someone";
    std::string formName = "Death certificate";
    try
    {
        Bureaucrat bbl(name, 40);
        Form        formy(formName, 40, 39);
        formy.beSigned(bbl);
        std::cout << bbl << std::endl;
        std::cout << formy << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
