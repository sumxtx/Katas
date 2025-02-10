#include <iostream>
#include <string>

std::string makeUpperCase(const std::string& input_str)
{
    unsigned long len = input_str.length();
    std::string result = input_str;
    for(unsigned long i = 0; i < len; i++)
    {
        result[i] = std::toupper(input_str[i]);
    }
    return result;
}

//Other solutions 
#include <algorithm>

std::string makeUpperCase_reserve(const std::string& input_str)
{
    std::string ret;
    ret.reserve(input_str.size());
    for(auto &ch :input_str)
    {
        ret.push_back(std::toupper(ch));
    }
    //ret.reserve(input_str.size()); //to reduce the number of allocations ??
    return ret;
}
int main(int ac, char **av)
{
    std::cout << makeUpperCase_reserve(av[1]);
    return(0);
}
