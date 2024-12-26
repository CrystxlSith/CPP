#include "Data.hpp"

// Constructors
Data::Data() : _name(42)
{
	std::cout << "\e[0;33mDefault Constructor called of Data\e[0m" << std::endl;
}

Data::Data(const Data &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Data\e[0m" << std::endl;
}


// Destructor
Data::~Data()
{
	std::cout << "\e[0;31mDestructor called of Data\e[0m" << std::endl;
}

void	Data::setName( int name ) { this->_name = name; }

int Data::getName() const { return this->_name; }

// Operators
Data & Data::operator=(const Data &assign)
{
	if (this == &assign)
	  return *this;
	this->_name = assign._name;
	return *this;
}

std::ostream&	operator<<(std::ostream& o, Data const &rSym) {
	o << rSym.getName();
	return o;
}