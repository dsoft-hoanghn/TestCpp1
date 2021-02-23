#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    std::vector<std::string> result = names1;

    bool Check = false;

    
    for (auto element1 : names2)
    {
        for( auto element2 : result)
        {
            if(element1 == element2)
            {
                Check = true;
                break;
            }
        }
        if(Check == false)
        {
            result.push_back(element1);
        }
        Check = false;
    }

    // Print all element in result vector
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
