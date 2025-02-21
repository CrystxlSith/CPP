#include "RPN.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 2) {
        try {
            std::string input(argv[1]);
            RPN rpn(input);
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}