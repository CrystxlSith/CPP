#include "Array.cpp"


int main( void )
{
    int t;
    Array<char> array(4);
    std::cout << array.getSize() << std::endl;
    for (int i = 0; i < 6; i++)
        {
            try
            {
                t = array[i];
                std::cout << "array1[" << i << "] = " << t << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        std::cout << std::endl;
    return 0;
}
