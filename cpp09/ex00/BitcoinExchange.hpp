#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
#include <cstdlib>
#include <climits>

class BitcoinExchange
{
private:
    std::map<std::string, double> _data;
public:
    BitcoinExchange(/* args */);
    BitcoinExchange(const BitcoinExchange &copy);
    ~BitcoinExchange();
    void parseData(std::string filename);
    void parseInput(std::string filename);
    void displayData() const;
    void displayExchangeRate(std::string file) const;
    void findNearestDate(std::string date, double nb);

    BitcoinExchange & operator=(const BitcoinExchange & rhs);
};
