#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("bigTree", 145, 137), _target(target) { std::cout << "ShrubberyCreationForm constructor called" << std::endl; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target) {
	std::cout << " ShrubberyCreationForm copy constructor called." << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void    ShrubberyCreationForm::execute( Bureaucrat const & executor )
{
    if (this->getSignature() == true)
    {
        std::string outfile = this->_target + "_shrubbery";
        std::ofstream output(outfile.c_str());
        executor.executeForm(*this);
        if (output.is_open())
        {
            output << "       ###" << std::endl;
            output << "      #o###" << std::endl;
            output << "    #####o###" << std::endl;
            output << "   #o#\\#|#/###" << std::endl;
            output << "    ###\\|/#o#" << std::endl;
            output << "     # }|{  #" << std::endl;
            output << "       }|{" << std::endl;
            output.close();
            std::cout << "I'ts a beautiful tree" << std::endl;
        }
    }
    else
        std::cout << "This form isn't signed, i cant't execute it!" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym) {
	if (this != &rSym) {
		this->_target = rSym._target;
	}
	return *this;
}