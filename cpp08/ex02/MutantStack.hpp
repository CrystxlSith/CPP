#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
#include <stack>
#include <iterator>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &copy);
		
		// Destructor
		~MutantStack<T>();
		// Operators
        MutantStack & operator=(const MutantStack &assign)
        {
            if (this != &assign)
            {
                std::stack<T>::operator=(assign);
            }
            return *this;
        }		

		// Iterator
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;


		// Methods
		iterator	begin(void) {return this->c.begin();};
		const_iterator	begin(void) const {return this->c.begin();};
		iterator	end(void) {return this->c.end();};
		const_iterator	end(void) const {return this->c.end();};

	private:
		
};


#endif