#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat & target) : AForm::AForm("bigTree", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute( Bureaucrat const & executor )
{
    if (this->getSignature() == true)
    {
        std::string outfile = this->_target.getName() + "_shrubbery";
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
