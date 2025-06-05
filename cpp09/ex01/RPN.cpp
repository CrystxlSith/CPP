#include "RPN.hpp"

// Constructors
RPN::RPN() : str("")
{
}

RPN::RPN(const RPN &copy) : str(copy.str)
{
	this->pile = copy.pile;
}

RPN::RPN(const std::string &line) : str(line)
{
}

// Destructor
RPN::~RPN()
{
}

void RPN::fill_stack()
{
	std::stringstream	ss(this->str);
	std::string token;

	while (ss >> token)
	{
		// std::cout << "token = " << token << std::endl;
		if (token.empty())
			throw std::runtime_error("Erreur: Token vide");
		if (NUMBERS.find(token) == std::string::npos && 
			OPERATORS.find(token) == std::string::npos)
			throw std::runtime_error("Erreur: Token invalide");
		if (OPERATORS.find(token) != std::string::npos)
		{
			if (this->pile.size() < 2)
				throw std::runtime_error("Erreur: Pas assez ou trop d'operandes");
			int b = this->pile.top();
			this->pile.pop();
			int a = this->pile.top();
			this->pile.pop();
			
			if (token == "+") this->pile.push(a + b);
			else if (token == "-") this->pile.push(a - b);
			else if (token == "*") this->pile.push(a * b);
			else if (token == "/" && b != 0) this->pile.push(a / b);
			else throw std::runtime_error("Erreur: division par zéro");
		}
		else
		{
			std::stringstream convert(token);
			int number;
			if (!(convert >> number))
				throw std::runtime_error("Erreur: nombre invalide");
			this->pile.push(number);
		}
	}
	if (this->pile.size() > 1)
		throw std::runtime_error("Erreur: Bad operation");
	// std::cout << this->pile.size() << std::endl;
	std::cout << this->pile.top() << std::endl;
}

// Operators
RPN & RPN::operator=(const RPN &assign)
{
	if (this != &assign) {
		this->pile = assign.pile;
		this->str = assign.str;
	}
	return *this;
}

