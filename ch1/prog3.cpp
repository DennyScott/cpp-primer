#import <iostream>

int main() 
{
    int v1 = 0, v2 = 0;
    std::cout << "Please enter two numbers." << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The product of these numbers are: " << v1 * v2 << std::endl;
    return 0;
}