#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialForm.hpp"
#include "Intern.hpp"


// int	main() {
// 	Bureaucrat *	Donald = new Bureaucrat("Donald", 2);
// 	Bureaucrat *	Joe = new Bureaucrat("Joe", 10);
// 	Bureaucrat *	Miguel = new Bureaucrat("Miguel", 65);
// 	Intern *		nobody = new Intern();
// 	AForm *			shru = new ShrubberyCreationForm(Joe->getName());
// 	AForm *			robot = new RobotomyRequestForm(Donald->getName());
// 	AForm *			ppf = NULL;

// 	try {
// 		std::string formName = "presidential pardon";
// 		ppf = nobody->makeForm(formName, Miguel->getName());
// 		robot->beSigned(*Miguel);
// 		shru->beSigned(*Joe);
// 		ppf->beSigned(*Joe);
// 		robot->execute(*Donald);
// 		shru->execute(*Donald);
// 		ppf->execute(*Donald);
// 	}
// 	catch(const std::exception& e) {
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << *shru << std::endl;
// 	std::cout << *robot << std::endl;

// 	delete ppf;
// 	delete robot;
// 	delete shru;
// 	delete nobody;
// 	delete Miguel;
// 	delete Joe;
// 	delete Donald;
// }

int main() {
    Intern intern;

    try {
        AForm* form1 = intern.makeForm("robotomy request", "Target A");
		form1->beSigned(Bureaucrat("Bureaucrat A", 1));
		form1->execute(Bureaucrat("Bureaucrat B", 1));
        delete form1; // Libérer la mémoire
    } catch (const Intern::WrongNameException& e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "--------------------------------" << std::endl;
    try {
        AForm* form1 = intern.makeForm("shrubbery creation", "Target A");
		form1->beSigned(Bureaucrat("Bureaucrat A", 1));
		form1->execute(Bureaucrat("Bureaucrat B", 1));
        delete form1; // Libérer la mémoire
    } catch (const Intern::WrongNameException& e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "--------------------------------" << std::endl;

    try {
        AForm* form1 = intern.makeForm("presidential form", "Target A");
		form1->beSigned(Bureaucrat("Bureaucrat A", 1));
		form1->execute(Bureaucrat("Bureaucrat B", 1));
        delete form1; // Libérer la mémoire
    } catch (const Intern::WrongNameException& e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "--------------------------------" << std::endl;

    try {
        AForm* form2 = intern.makeForm("unknown form", "Target B");
		form2->beSigned(Bureaucrat("Bureaucrat A", 1));
		form2->execute(Bureaucrat("Bureaucrat B", 1));
        delete form2; // Libérer la mémoire
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
