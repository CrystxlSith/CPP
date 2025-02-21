#include "BitcoinExchange.hpp"


int main(int argc, char *argv[])
{
    (void)argv;
    std::string line;
    if (argc != 2)
        return std::cout << "Error: could not open file" << std::endl, 1;
    
    BitcoinExchange bitcoinExchange;
    bitcoinExchange.parseData("data.csv");
    bitcoinExchange.parseInput(argv[1]);
    return 0;
}
