#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <algorithm>
# include <limits.h> 

class Span
{
	public:
		// Constructors
		Span();
		Span(const Span &copy);
		Span(const unsigned int N);
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		
		// Methods
		void	addNumber(int N);
	    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		// Exceptions
		class noNeedMore : public std::exception {
			virtual const char* what() const throw();
		};
		class noFindDist : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		std::vector<int> _array;
		unsigned int	_maxNb;
};

#endif