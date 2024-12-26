#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(const Data &copy);
		
		// Destructor
		~Data();
		
		void setName( int name );
		int getName() const ;

		// Operators
		Data & operator=(const Data &assign);
		
	private:
		int _name;
		
};

std::ostream&	operator<<(std::ostream& o, Data const &rSym);

#endif