#include "Span.hpp"
#include <iostream>
#include <cassert>
#include <ctime>

void testWithSmallNumbers()
{
    Span me(10);

    try
    {
        me.addNumber(5);
        me.addNumber(12);
        me.addNumber(8);
        me.addNumber(875);
        assert(me.longestSpan() == 870);
        assert(me.shortestSpan() == 3);
        std::cout << "testWithSmallNumbers passed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testWithLargeNumbers()
{
    Span me(10000);

    try
    {
        for (int i = 0; i < 10000; ++i)
        {
            me.addNumber(i);
        }
        assert(me.longestSpan() == 9999);
        assert(me.shortestSpan() == 1);
        std::cout << "testWithLargeNumbers passed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void testWithRandomNumbers()
{
    Span me(10000);
    std::srand(std::time(0));

    try
    {
        for (int i = 0; i < 10000; ++i)
        {
            me.addNumber(std::rand());
        }
        std::cout << "testWithRandomNumbers passed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    testIteratorRange()
{
    Span sp(10);

    try
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(int));
        sp.addNumbers(numbers.begin(), numbers.end());
        std::cout << "iterator test passed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main()
{
    testWithSmallNumbers();
    testWithLargeNumbers();
    testWithRandomNumbers();
    testIteratorRange();
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}