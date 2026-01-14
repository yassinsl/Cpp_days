#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
: AForm(other),_target(other._target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

const std::string &RobotomyRequestForm::getTarget() const{return this->_target;}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "* drilling noises *" << std::endl;

    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed on << _target << "." << std::endl;
}

