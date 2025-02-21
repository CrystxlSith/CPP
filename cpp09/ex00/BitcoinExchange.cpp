#include "BitcoinExchange.hpp"
#include <iomanip>

BitcoinExchange::BitcoinExchange(/* args */)
{
   
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & copy)
{
    (void)copy;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    (void)rhs;
    return *this;
}

void BitcoinExchange::parseInput(std::string filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    
    std::string line;
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cout << "Error: date | value wrong or missing" << std::endl;
        return;
    }
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string separator, date;
        double nb;
        ss >> date >> separator >> nb;
        if ((date[4] != '-' || date[7] != '-' || separator != "|"))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        std::string year = date.substr(0, 4);
        std::string month = date.substr(5, 2);
        std::string day = date.substr(8, 2);
        if (year.find_first_not_of("0123456789") != std::string::npos ||
        month.find_first_not_of("0123456789") != std::string::npos ||
        day.find_first_not_of("0123456789") != std::string::npos)
        {
            std::cout << "Error: bad input =>" << date << std::endl;
            continue;
        }
        int y = std::atoi(year.c_str());
        int m = std::atoi(month.c_str());
        int d = std::atoi(day.c_str());
        if (y < 0 || m < 1 || m > 12 || d < 1 || d > 31)
        {
            std::cout << "Error: invalid date" << std::endl;
            continue;
        }
        if (nb < 1)
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        else if (nb > 1000)
        {
            std::cout << "Error: too large number" << std::endl;
            continue;
        }
        if (this->_data[date])
            std::cout << date << " => " << nb << " = " << nb * this->_data[date] << std::endl;
        else
            this->findNearestDate(date, nb);
    }
}

void BitcoinExchange::parseData(std::string filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }

    std::string line, key;
    double f;
    std::stringstream ss(line);

    std::getline(file, line);
    while (std::getline(file, line))
    {
        key = line.substr(0, 10);
        f = std::atof(line.substr(11).c_str());
        this->_data.insert(std::make_pair(key, f));
    }
    

}

void BitcoinExchange::displayData() const
{

}

void BitcoinExchange::displayExchangeRate(std::string file) const
{
    (void)file;

}

void BitcoinExchange::findNearestDate(std::string date, double nb)
{
    // std::string year = date.substr(0, 4);
    // std::string month = date.substr(5, 2);
    // std::string day = date.substr(8, 2);
    // int y = std::atoi(year.c_str());
    // int m = std::atoi(month.c_str());
    // int d = std::atoi(day.c_str());
    std::map<std::string, double>::iterator it = this->_data.lower_bound(date);

    if (it == this->_data.begin()) {
        std::cout << "no" << std::endl;
    } else {
        --it;
        // std::cout << "Date la plus proche avant " << date << " : "
        //           << it->first << " -> " << it->second << std::endl;
        std::cout << date << " => " << nb << " = " << nb * it->second << std::endl;
    }
}
