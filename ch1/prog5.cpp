#include <iostream>

int main()
{
    int som = 0, val = 1;
    //keep executing the while as long as val is less then or equal to 10
    while(val <= 10)
    {
        som += val; //assigns som + val to sum
        ++val; //add 1 to val
    }

    std::cout << "Sum of 1 to 10 inclusive is " << som << std::endl;
    return 0;
}