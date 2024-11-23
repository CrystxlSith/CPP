#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialForm.hpp"
#include "Intern.hpp"


int main() {
    Intern intern;

    try {
        AForm* form1 = intern.makeForm("robotomy request", "Target A");
        // delete form1; // Libérer la mémoire
    } catch (const Intern::WrongNameException& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        AForm* form2 = intern.makeForm("unknown form", "Target B");
        // delete form2; // Libérer la mémoire
    } catch (const Intern::WrongNameException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

// int main(void)
// {
//     std::string name = "someone";
//     std::string formName = "Death certificate";
//     try
//     {
//         Bureaucrat bbl(name, 5);
//         PresidentialForm       formy(bbl.getName());
//         formy.beSigned(bbl);
//         formy.execute(bbl);
//         std::cout << bbl << std::endl;
//         std::cout << formy << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     return 0;
// }
