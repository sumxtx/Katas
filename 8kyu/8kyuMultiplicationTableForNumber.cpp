/* https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/train/cpp */
#include <string>
#include <iostream>
#include <sstream>

std::string multi_table(int number)
{
    std::stringstream result;
    if(number > 0 && number <= 10){
      for(int i = 1; i < 11; i++){
        result << (std::to_string(i)+ " * " +std::to_string(number)+ " = " +std::to_string(i * number));
        if (! (i == 10))
          result << "\n";
        // (i < 10 ? "\n" : "") // with ternary
      }
    }
  return result.str();
}

int main(int ac, char **av)
{
    std::cout << multi_table(std::atoi(av[1])) << std::endl;
    return(0);
}
