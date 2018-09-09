#include <iostream>

int main() 
{
    int rangeOne = 0, rangeTwo = 0;

    std::cout << "Please enter two numbers for a range: " << std::endl;

    std::cin >> rangeOne >> rangeTwo;

    while(rangeOne <= rangeTwo)
    {
        std::cout << rangeOne;
        rangeOne++;
    }

    std::cout << std::endl;
    return 0;
}