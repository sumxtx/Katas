#include <iostream>
#include <string>
#include <vector>

std::string strReplace(std::string &str, char newer, unsigned amount){
  std::string res = str;
  unsigned len = str.length();
  for(unsigned i = 0; i < amount; i++){
    res[i] = newer;
    res[(len -1) - i] = newer;
  }
  return res;
}

std::vector<std::string> towerBuilder(unsigned nFloors) {

  std::vector<std::string> result;
  
  if(nFloors <= 0){
    result.push_back("");
    return result;
  }
  
  result.resize(nFloors);
  unsigned iter = 0;
  unsigned cur_level = 1;
  unsigned spaces_padding = 0;
  std::string holder (((nFloors * 2) - 1), '*'); 
  
  while(iter < nFloors){ 
    spaces_padding = (nFloors - (cur_level));
    result[iter] = strReplace(holder, ' ', spaces_padding);    
    cur_level++;
    iter++;
  }

  return result;
}

int main(int ac, char **av)
{
    std::vector<std::string> result = towerBuilder(std::atoi(av[1]));
    for(auto &i : result)
    {
        std::cout << i << std::endl;
    }
}
