#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <deque>
# include <cstdlib>
# include <vector>

class PmergeMe
{
	public:
		// Constructors
		PmergeMe(std::vector<int> &input);
		PmergeMe(const PmergeMe &copy);
		
		// Destructor
		~PmergeMe();
		
		// Operators
		PmergeMe & operator=(const PmergeMe &assign);
		
	private:
		std::vector<int>	_vec;
		std::deque<int>		_deq;
		int					_lastElement_vec;
		int					_lastElement_deq;
		void	_makePairs();
		void	_groups(std::vector<std::pair<int, int> > &pairs);
		void	_recursiveMainGroup(std::vector<int>	&mainGroup);

        void _makePairsDeque();
        void _groupsDeque(std::deque<std::pair<int, int> > &pairs);
        void _recursiveMainGroupDeque(std::deque<int> &mainGroup);
};

void print_pair_vector(std::vector<std::pair<int, int> > &pairs);
size_t binarySearch(const std::vector<int>& arr, int target);
size_t binarySearchDeque(const std::deque<int> &arr, int target);
void print_vector(std::vector<int> &vec);
void print_deque(std::deque<int> &deq);

#endif