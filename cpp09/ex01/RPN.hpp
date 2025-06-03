#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <cstdlib>

static const std::string OPERATORS = "+-*/";
static const std::string NUMBERS = "0123456789";

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(const RPN &copy);
		RPN(const std::string& line);
		// Destructor
		~RPN();
		
		// Methods
		void fill_stack();

		// Operators
		RPN & operator=(const RPN &assign);
	private:
		std::stack<int>	pile;	
		std::string str;
};

#endif