# include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    if (argc > 2)
    {
        std::vector<int> input;
        for (size_t i = 1; argv[i] != NULL; i++)
        {
            for (size_t j = 0; argv[i][j] != '\0'; j++)
            {
                if (!isdigit(argv[i][j]))
                {
                    return std::cout << "Error: bad input" << std::endl, 1;
                }
            }
            int nb = atoi(argv[i]);
            input.push_back(nb);
        }
        PmergeMe ford(input);
    }
    else
        throw std::runtime_error("Usage ./PmergeMe <positive numbers>");
    return 0;
}