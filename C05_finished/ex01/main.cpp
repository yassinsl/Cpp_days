#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat person_1;
  try{
    person_1.incrementGrade();
  }
  catch(std::exception &e) {std::cout << e.what() << std::endl;}
  return 0; 
}
