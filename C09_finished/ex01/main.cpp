#include "RPN.hpp"

int main(int ac, char **av){
  try{
    if(ac != 2) throw std::invalid_argument(INVALID_ARGS);
    Reverse_Polish_Notation(av[ac - 1]);
    }
  catch(std::exception & e){std::cout << e.what() << std::endl;}
}
