#include <iostream>
#include <vector>
#include<set>

void AddElement(std:: set <std::string> &name, std::vector<std::string> InputVector)
{
    for(auto element : InputVector)
    {
        name.insert(element);
    }
}

int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    std :: set<std::string> result;
    AddElement(result,names1);
    AddElement(result,names2);

    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
