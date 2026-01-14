#include "Bureaucrat.hpp"

int main()
{
  

  try{
    Bureaucrat person_1("yassin", 155);
    Bureaucrat P(person_1);
    person_1.decrementGrade();
    std::cout << "success" << std::endl;
  }
  catch(std::exception &e) {std::cout << e.what() << std::endl;}
  try{
    Bureaucrat person_1("yassin", 150);
    person_1.incrementGrade();
    std::cout << "success" << std::endl;
  }
catch(std::exception &e) {std::cout << "Error: " << e.what() << std::endl;}
  return 0; 
}
