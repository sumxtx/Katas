/* https://www.codewars.com/kata/5786f8404c4709148f0006bf/train/cpp */
#include <cmath>
#include <cassert>
#include <string>
#include <iostream>

double startingMark(double bodyHeight)
{
    // Remember: Body height of 1.52 m --> starting mark: 9.45 m
    //           Body height of 1.83 m --> starting mark: 10.67 m
    // All other starting marks are based on these guidelines!
    
  double height1 = 1.52;
  double height2 = 1.83;
  double start1  = 9.45;
  double start2  = 10.67;
  
  /*calculo de la pendiente*/ 
  double m = ((start2 - start1) / (height2 - height1));
  double b = (start1 - (m * height1));
  
  /*calculo de x respecto al factor de la pendiente*/
  double x = ((m * bodyHeight) + b);
  
  /* round up */
  x = std::round(x * 100.00)/100.00;
  return x;
}

int main (int ac, char **av)
{
    if(ac == 1){
        std::cout << "[vv]Running basic tests. Allows pass by argument" << std::endl;
        std::cout << "\tExample: ./a.out 1.22" << std::endl;
        assert(startingMark(1.75 == 10.36));
        std::cout << "\nTest1 Passed" << std::endl;

    }
    else
    {
        double x = startingMark(std::stod(av[1]));
        std::cout << std::to_string(x) << std::endl;
        //std::cout << startingMark(std::stod(av[1]) << std::endl;
    }
    return (0);
}
