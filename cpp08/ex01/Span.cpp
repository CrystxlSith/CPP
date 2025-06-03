#include "Span.hpp"

// Constructors
Span::Span() : _maxNb(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const unsigned int num) : _maxNb(num)
{
	std::cout << "\e[0;33m{1} Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy) : _array(copy._array), _maxNb(copy._maxNb)
{
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


//Methods
void	Span::addNumber(int N)
{
	if (_array.size() >= _maxNb)
		throw noNeedMore();
	_array.push_back(N);
	
}

int		Span::shortestSpan()
{
	try
	{
		if (_array.size() <= 1)
			throw noFindDist();
		std::vector<int> sortedArray = _array;
		std::sort(sortedArray.begin(), sortedArray.end());
		int shortest = std::numeric_limits<int>::max();
		for (size_t i = 1; i < sortedArray.size(); ++i)
		{
			int span = sortedArray[i] - sortedArray[i - 1];
			if (span < shortest)
				shortest = span;
		}
		return (shortest);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return -1; 
	}
}

int		Span::longestSpan()
{
	try
	{
		if (_array.size() <= 1)
			throw noFindDist();
		int shortest = *std::min_element(_array.begin(), _array.end());
		int biggest = *std::max_element(_array.begin(), _array.end());
		return (biggest - shortest);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return -1;
	}
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (std::distance(begin, end) + _array.size() > _maxNb)
        throw noNeedMore();
    _array.insert(_array.end(), begin, end);
}

// Operators
Span & Span::operator=(const Span &assign)
{
	if (this != &assign)
	{
		this->_array = assign._array;
		this->_maxNb = assign._maxNb;
	}
	return *this;
}



// Exceptions
const char * Span::noNeedMore::what() const throw()
{
	return "num is already fill";
}
const char * Span::noFindDist::what() const throw()
{
	return " no distance found";
}
