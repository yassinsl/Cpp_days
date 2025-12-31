#include "RobotmyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("ROBBOTMY",72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(string target, string name): AForm(name,  72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other):AForm(other.name, other.grade_to_sign, other.grade_to_execute), _target(target);

void RobotomyRequestForm::executeAction() const{
  std::cout << "drilling noises" << std::endl;
  //TODO: remove srand in this function
  srand(time((void *)0));
  int num = rand();

  if(!(num % 2)) 
      std::cout << this->GetTarget() << "has been robotmized successfully.";
  else 
    std::cout << other.name << " failed on " << this->GetTarget();
  std::cout << "\n";
}
