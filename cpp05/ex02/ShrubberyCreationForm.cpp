#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(/* args */) : AForm("shrubberyForm", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::executeForm( AForm const & form)
{
    if (form.getSignature() == true)
    {

    }
    else
        std::cout << "This form isn't signed, i cant't execute it!" << std::endl;
}
