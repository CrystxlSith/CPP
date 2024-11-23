#include "PresidentialForm.hpp"

PresidentialForm::PresidentialForm(Bureaucrat & target) : _target(target), AForm("President", 25, 5)
{
    std::cout << "PresidentialForm constructror called" << std::endl;
}

PresidentialForm::PresidentialForm(PresidentialForm const &src) : AForm(src), _target(src._target)
{
    std::cout << "PresidentialForm copy constructor called" << std::endl;
    *this = src;
}

PresidentialForm::~PresidentialForm()
{
    std::cout << "PresidentiaForm destructor called" << std::endl;
}

void    PresidentialForm::execute( Bureaucrat const & executor )
{
    if ( this->getSignature() == true)
    {
        executor.executeForm(*this);
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        std::cout << "Zaphod Beeblebrox cannot give his pardon to " << executor.getName() << std::endl;
}

PresidentialForm& PresidentialForm::operator=(PresidentialForm const &rSym)
{
	if (this != &rSym) {
		this->_target = rSym._target;
	}
	return *this;
}