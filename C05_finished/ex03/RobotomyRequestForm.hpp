#pragma once 
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
  private:
    std::string _target;

  public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(RobotomyRequestForm &other);
    ~RobotomyRequestForm();

    const std::string &getTarget() const;
    void executeAction() const;
};

