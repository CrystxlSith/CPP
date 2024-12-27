#include "Array.cpp"


int main( void )
{
    int j;
    Array<char> array(4);
    std::cout << "Create a array of size " << array.size() << std::endl;
    for (int i = 0; i < 6; i++)
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
