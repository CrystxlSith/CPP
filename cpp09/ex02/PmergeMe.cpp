#include "PmergeMe.hpp"

// 1 : Pair division
// 2 : Grouping pairs, first element is the bigger one, second is the smaller one
// 3 : We made 2 groups, 1rst group (mainGroup) is the first elements of pairs, 2nd group (secondaryGroup) is the second elements of pairs
// 4 : We sort the mainGroup recursively
// 5 : We insert the secondaryGroup elements in the mainGroup at the right position with binary search
// 6 : Insertion of the last element if the vector size is odd

// Constructors
PmergeMe::PmergeMe(std::vector<int> &input) 
    : _vec(input), _lastElement_vec(0), _lastElement_deq(0)
{
	// Dupicate verification
    for (size_t i = 0; i < input.size(); ++i) {
        for (size_t j = i + 1; j < input.size(); ++j) {
            if (input[i] == input[j]) {
                std::cout << "Error: Duplicate value detected: " << input[i] << std::endl;
                _vec.clear();
                _deq.clear();
                return;
            }
        }
    }

    std::vector<int> temp = _vec; 
    _deq.clear();
    
    for (size_t i = 0; i < temp.size(); ++i) {
        _deq.push_back(temp[i]);
    }
    
    if (_deq.size() != _vec.size()) {
        std::cout << "Error: deque size mismatch after initialization" << std::endl;
        return;
    }
    
	// Timing the processing of pairs
    clock_t start_vec = clock();
    this->_makePairs();
    clock_t end_vec = clock();
    double time_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 10000;

    clock_t start_deq = clock();
    this->_makePairsDeque();
    clock_t end_deq = clock();
    double time_deq = static_cast<double>(end_deq - start_deq) / CLOCKS_PER_SEC * 10000;

    std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << time_vec << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << time_deq << " us" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

// Destructor
PmergeMe::~PmergeMe()
{
    if (_vec.size() != _deq.size()) {
        std::cout << "Warning: vector size (" << _vec.size() 
                  << ") != deque size (" << _deq.size() << ")" << std::endl;
    }
    
    _deq.clear();
    _vec.clear();
}

// Operators
PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{
    if (this != &assign)
    {
        this->_vec = assign._vec;
        this->_deq = assign._deq;
        this->_lastElement_vec = assign._lastElement_vec;
        this->_lastElement_deq = assign._lastElement_deq;
    }
    return *this;
}

// Methods vector
// This method processes pairs of elements in the vector, sorts them, and groups them.
void PmergeMe::_makePairs()
{
	std::vector<std::pair<int, int> > pairs;

	std::cout << "Before:	";
	print_vector(_vec);

	for (size_t i = 0; i < _vec.size(); i += 2)
	{
		if (i + 1 < _vec.size())
		{
			if (_vec[i] > _vec[i + 1])
				pairs.push_back(std::make_pair(_vec[i], _vec[i + 1]));
			else
				pairs.push_back(std::make_pair(_vec[i + 1], _vec[i]));
		}
		else
			this->_lastElement_vec = _vec[i];
	}
	_groups(pairs);
	if (this->_lastElement_vec)
	{
		size_t pos = binarySearch(_vec, this->_lastElement_vec);
		_vec.insert(_vec.begin() + pos, this->_lastElement_vec);
	}
	std::cout << "After:	";
	print_vector(_vec);
}


// This method groups pairs of elements and recursively sorts the main group.
void PmergeMe::_groups(std::vector<std::pair<int, int> > &pairs)
{
	std::vector<int>	mainGroup;
	std::vector<int>	secondGroup;
	for (std::vector<std::pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		mainGroup.push_back(it->first);
		secondGroup.push_back(it->second);
	}
	this->_recursiveMainGroup(mainGroup);
	for (size_t i = 0; i < secondGroup.size(); i++) {
		size_t pos = binarySearch(mainGroup, secondGroup[i]);
		mainGroup.insert(mainGroup.begin() + pos, secondGroup[i]);
	}
	_vec = mainGroup;
}

void	PmergeMe::_recursiveMainGroup(std::vector<int>	&mainGroup)
{
	if (mainGroup.size() < 2)
		return ;

	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i < mainGroup.size(); i += 2) {
		if (i + 1 < mainGroup.size()) {
			if (mainGroup[i] > mainGroup[i + 1])
				pairs.push_back(std::make_pair(mainGroup[i], mainGroup[i + 1]));
			else
				pairs.push_back(std::make_pair(mainGroup[i + 1], mainGroup[i]));
		}
	}
	std::vector<int> newMainGroup;
	std::vector<int> secondaryGroup;
	int lastElement = 0;
	
	for (size_t i = 0; i < pairs.size(); i++) {
		newMainGroup.push_back(pairs[i].first);
		secondaryGroup.push_back(pairs[i].second);
	}
	
	if (mainGroup.size() % 2 == 1) {
		lastElement = mainGroup[mainGroup.size() - 1];
	}
	
	_recursiveMainGroup(newMainGroup);

	mainGroup.clear();
	for (size_t i = 0; i < newMainGroup.size(); i++) {
		mainGroup.push_back(newMainGroup[i]);
	}
	
	for (size_t i = 0; i < secondaryGroup.size(); i++) {
		size_t pos = binarySearch(mainGroup, secondaryGroup[i]);
		mainGroup.insert(mainGroup.begin() + pos, secondaryGroup[i]);
	}
	
	if (lastElement != 0) {
		size_t pos = binarySearch(mainGroup, lastElement);
		mainGroup.insert(mainGroup.begin() + pos, lastElement);
	}
}


// Binary search function for vector
// This function finds the position to insert the target in a sorted vector.
size_t binarySearch(const std::vector<int>& arr, int target) {
	size_t left = 0;
	size_t right = arr.size();
	
	while (left < right) {
		size_t mid = left + (right - left) / 2;
		if (arr[mid] > target)
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}

// Methods deque
void PmergeMe::_makePairsDeque()
{
	std::deque<std::pair<int, int> > pairs;

	for (size_t i = 0; i < _deq.size(); i += 2)
	{
		if (i + 1 < _deq.size())
		{
			if (_deq[i] > _deq[i + 1])
				pairs.push_back(std::make_pair(_deq[i], _deq[i + 1]));
			else
				pairs.push_back(std::make_pair(_deq[i + 1], _deq[i]));
		}
		else
			this->_lastElement_deq = _deq[i];
	}
	_groupsDeque(pairs);
	if (this->_lastElement_deq)
	{
		size_t pos = binarySearchDeque(_deq, this->_lastElement_deq);
		_deq.insert(_deq.begin() + pos, this->_lastElement_deq);
	}
}

void PmergeMe::_groupsDeque(std::deque<std::pair<int, int> >& pairs)
{
	if (pairs.empty()) {
		return; // Protection contre les entrées vides
	}
	
	std::deque<int> mainGroup;
	std::deque<int> secondGroup;
	
	for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		mainGroup.push_back(it->first);
		secondGroup.push_back(it->second);
	}
	
	this->_recursiveMainGroupDeque(mainGroup);
	
	for (size_t i = 0; i < secondGroup.size(); i++) {
		size_t pos = binarySearchDeque(mainGroup, secondGroup[i]);
		mainGroup.insert(mainGroup.begin() + pos, secondGroup[i]);
	}
	
	_deq.clear();
	for (std::deque<int>::iterator it = mainGroup.begin(); it != mainGroup.end(); ++it) {
		_deq.push_back(*it);
	}
}

void PmergeMe::_recursiveMainGroupDeque(std::deque<int> &mainGroup)
{
	size_t initial_size = mainGroup.size();
	
	if (mainGroup.size() < 2)
		return ;

	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i < mainGroup.size(); i += 2) {
		if (i + 1 < mainGroup.size()) {
			if (mainGroup[i] > mainGroup[i + 1])
				pairs.push_back(std::make_pair(mainGroup[i], mainGroup[i + 1]));
			else
				pairs.push_back(std::make_pair(mainGroup[i + 1], mainGroup[i]));
		}
	}
	std::deque<int> newMainGroup;
	std::deque<int> secondaryGroup;
	int lastElement = 0;
	
	for (size_t i = 0; i < pairs.size(); i++) {
		newMainGroup.push_back(pairs[i].first);
		secondaryGroup.push_back(pairs[i].second);
	}
	
	if (mainGroup.size() % 2 == 1) {
		lastElement = mainGroup[mainGroup.size() - 1];
	}
	
	_recursiveMainGroupDeque(newMainGroup);

	mainGroup.clear();
	for (size_t i = 0; i < newMainGroup.size(); i++) {
		mainGroup.push_back(newMainGroup[i]);
	}
	
	for (size_t i = 0; i < secondaryGroup.size(); i++) {
		size_t pos = binarySearchDeque(mainGroup, secondaryGroup[i]);
		mainGroup.insert(mainGroup.begin() + pos, secondaryGroup[i]);
	}
	
	if (lastElement != 0) {
		size_t pos = binarySearchDeque(mainGroup, lastElement);
		mainGroup.insert(mainGroup.begin() + pos, lastElement);
	}

	if (mainGroup.size() > initial_size * 2) {
		std::cout << "Warning: deque size grew unexpectedly!" << std::endl;
		while (mainGroup.size() > initial_size * 2) {
			mainGroup.pop_back();
		}
	}
}

size_t binarySearchDeque(const std::deque<int>& arr, int target) {
	size_t left = 0;
	size_t right = arr.size();
	
	while (left < right) {
		size_t mid = left + (right - left) / 2;
		if (arr[mid] > target)
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}

void print_deque(std::deque<int> &deq)
{
	for (std::deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it)
	{
		std::cout << *it;
		if (it + 1 != deq.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void print_vector(std::vector<int> &vec)
{
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it;
		if (it + 1 != vec.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void print_pair_vector(std::vector<std::pair<int, int> > &pairs)
{
	for (std::vector<std::pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		std::cout << "(" << it->first << "," << it->second << ")";
		if (it + 1 != pairs.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}
