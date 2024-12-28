#include "easyfind.cpp"


int main( void )
{
    std::vector<int>  list;

    list.push_back(30);
    list.push_back(54);
    list.push_back(5);

    std::cout << findOcc(list, 54) << std::endl;
    std::cout << findOcc(list, 45) << std::endl;
    return 0;
}
