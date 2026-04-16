#include "PmergeMe.hpp"
int main(int ac, char **av) {
  try 
  {
    if (ac < 2) throw std::invalid_argument("Error");
    PmergeMe sorted_obj(av);
    sorted_obj.display_before();
  } 
  catch (std::exception &e) {std::cerr << e.what() << std::endl;}
}