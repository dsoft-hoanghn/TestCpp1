#include <iostream>
#include <string>

class TextInput
{
    protected:
        std::string CurrentValue ;
    public:
       virtual void add(char c) 
        { 
            CurrentValue += c;
        }

        std::string getValue()
        {
            return CurrentValue;
        }
};

class NumericInput : public TextInput 
{ 
    void add(char c)
    {
        if(((c >= 'A') &&(c<='Z'))||((c >= 'a') &&(c<='z')));
        else
        {
            CurrentValue += c;
        }
    }
};

#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('b');
    input->add('0');
    std::cout << "this is Current Value: "<< input->getValue();
}
#endif