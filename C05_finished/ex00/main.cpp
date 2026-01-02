#include "Bureaucrat.hpp"

int main()
{
  
  Bureaucrat person_1("yassin", 150);

  try{
    person_1.incrementGrade();
    std::cout << "success" << std::endl;
  }
  catch(std::exception &e) {std::cout << e.what() << std::endl;}
  person_1 = Bureaucrat(Bureaucrat("test", 1));
  try{
    person_1.incrementGrade();
    std::cout << "success" << std::endl;
  }
catch(std::exception &e) {std::cout << "Error: " << e.what() << std::endl;}
  return 0; 
}
