#include "BitcoinExchange.hpp"


int main(int argc, char *argv[])
{
    (void)argv;
    std::string line;
    if (argc != 2)
        return std::cout << "Error: could not open file" << std::endl, 1;

    std::ifstream file(argv[1]);
    if (!file.is_open())
        return std::cout << "Error: could not open file" << std::endl, 1;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
    
    return 0;
}
