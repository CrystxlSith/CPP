#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat & target) : AForm("Robotnik", 72, 45), _target(target)
{
    std::cout << "{1} RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target) {
	std::cout << " RobotomyRequestForm copy constructor called." << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym) {
	if (this != &rSym) {
		this->_target = rSym._target;
	}
	return *this;
}

void    RobotomyRequestForm::execute( Bureaucrat const & executor )
{
    if (this->getSignature() == true)
    {
        executor.executeForm(*this);
        std::cout << "Brrrr... Brrrrr... Brrrrr..." << std::endl;
        int randomValue = std::rand() % 2; // 0 ou 1
        if (randomValue == 1)
            std::cout << executor.getName() << " has been Robotomized 🤖🤖🤖🤖" << std::endl;
        else
            std::cout << executor.getName() << " Robotomization failed..." << std::endl;
    }
}