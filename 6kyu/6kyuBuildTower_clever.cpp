#include <string>
#include <vector>

std::vector<string> towerBuilder(unsigned nFloors)
{
    std::vector <std::string> vect;
    for(unsigned i = 0, k = 1; i < nFloors; i++, k+=2)
        vect.push_back(string(nFloors-i-1), ' ') + string(k, '*') + string(nFloors-i-1, ' '));
    return {vect};
}

int main(int ac, char **av)
{
    std::vector<std::string> result = towerBuilder(std::atoi(av[1]));
    for(auto &i : result)
    {
        std::cout << i << std::endl;
    }
}
