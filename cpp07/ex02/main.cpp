#include "Array.cpp"


int main( void )
{
    int j;

    Array<char> array(8);
    std::cout << "Create a array of size " << array.size() << std::endl;

    Array<std::string> complexArray(5);
    std::cout << "Create a complex array of size " << complexArray.size() << std::endl;

    Array<int> emptyArray;
    std::cout << "Create an empty array of size " << emptyArray.size() << std::endl;
    std::cout << "Try to access an element of the empty array" << std::endl;
    try
    {
        emptyArray[0] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        complexArray[0] = "Hello";
        complexArray[1] = "World";
        complexArray[2] = "This";
        complexArray[3] = "Is";
        complexArray[4] = "CPP";

        for (unsigned int i = 0; i < complexArray.size(); i++)
        {
            std::cout << "complexArray[" << i << "] = " << complexArray[i] << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < 12; i++)
        {
            try
            {
                array[i] = i;
                j = array[i];
                std::cout << "array[" << i << "] = " << j << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        std::cout << std::endl;
    
    return 0;
}
