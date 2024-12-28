#include "easyfind.hpp"

template <typename T>
int    findOcc(T& ctn, unsigned int nb)
{
    typename T::iterator it = std::find(ctn.begin(), ctn.end(), nb);
    typename T::iterator ite = ctn.end();

    if (it != ite)
        std::cout << "found "<< *it << std::endl;
    else
        return std::cout << "not found" << std::endl, -1;
    return 0;
}
