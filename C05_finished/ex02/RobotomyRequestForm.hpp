#pragma once 
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
  private:
    const string _target;
  public:
     RobotomyRequestForm(string targit);
     RobotomyRequestForm(string target, string name, int sign, int execute);
     RobotomyRequestForm(RobotomyRequestForm &other);
     virtual void executeAction(void) const;
     const string &GetTarget() const;
}
