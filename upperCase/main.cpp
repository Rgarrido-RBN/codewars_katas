#include <iostream>
#include <string>

#define FIRST_UPPERCASE_LETTER 97
#define LAST_UPPERCASE_LETTER 124
#define LOWERCASE_TO_UPERCASE_OFFSET 32

std::string makeUpperCase (const std::string& input_str)
{
    std::string str = input_str;
    for ( int i = 0; i <= str.length() ; ++i)
    {
        if(str[i] >= FIRST_UPPERCASE_LETTER && str[i] <= LAST_UPPERCASE_LETTER)
        {
            str[i] = str[i] - LOWERCASE_TO_UPERCASE_OFFSET;
        }
    }
    return str;
}

int main(void)
{
    std::string string1;
    std::cout<<"Type a word:  "<<std::endl;
    std::cin>>string1;
    std::cout<<"your word in UpperCase:  "<< makeUpperCase(string1)<<std::endl;
    return 0;
}