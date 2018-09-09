#include <iostream>

int main() 
{
    int rangeOne = 0, rangeTwo = 0;
    int small = 0, big = 0;

    std::cout << "Please enter two numbers for a range: " << std::endl;

    std::cin >> rangeOne >> rangeTwo;

    if(rangeOne > rangeTwo)
    {
        small = rangeTwo;
        big = rangeOne;
    }
    else
    {
        small = rangeOne;
        big = rangeTwo;
    }

    while(small <= big)
    {
        std::cout << small;
        small++;
    }

    std::cout << std::endl;
    return 0;
}