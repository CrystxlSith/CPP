#include "RPN.hpp"
int main(int argc, char const *argv[])
{
    if (argc == 2) {
        try {
            std::string input(argv[1]);
            RPN rpn(input); // Construction sans exception
            rpn.fill_stack(); // Appel explicite qui peut lancer une exception
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}