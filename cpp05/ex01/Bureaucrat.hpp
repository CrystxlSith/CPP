#pragma once

#include <iostream>
#include <stdlib.h>

#define MINGRADE 150
#define MAXGRADE 1

class Bureaucrat
{
private:
    std::string const _name;
    unsigned int _grade;
public:
    Bureaucrat(); // Default constructor
    Bureaucrat(std::string& name,int grade);  // Constructor with parameters
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat(); // Destructor
    // GETTERS AND SETTERS
    unsigned int getGrade(void) const; // Set grade
    std::string getName(void) const; // Get name

    // METHODS
    void        signForm(const bool &signature, std::string const &nameForm) const;

    // OPERATOR OVERLOAD
    Bureaucrat& operator=(Bureaucrat const& rhs);

    void incrementGrade(void); // Increment grade
    void decrementGrade(void); // Decrement grade
    // EXCEPTIONS
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Grade is too high";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Grade is too low";
            }
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bur); // Output stream operator

