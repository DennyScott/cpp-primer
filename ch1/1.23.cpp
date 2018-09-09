#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item items[7];

    for (int i = 0; i < 7; i++)
    {
        std::cin >> items[i];
    }

    for (int i = 0; i < 7; i++)
    {
        int total = 0;
        int found = 0;
        
        
        for (int h = i; h >= 0; h--)
        {
            if (items[h].isbn() == items[i].isbn() && h != i)
            {
                found = 1;
            }
        }

        for (int j = 0; j < 7; j++)
        {

            if (items[i].isbn() == items[j].isbn() && found == 0)
                total++;
        }

        if (found == 0)
            std::cout << "There are " << total << " items for " << items[i] << std::endl;
    }
    return 0;
}