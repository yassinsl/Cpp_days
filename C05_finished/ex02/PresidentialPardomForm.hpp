#pragma once 

#include "AForm.hpp"

class PresidentialRequestForm: public AForm{
  private:
    const string _target;
  public:
    PresidentialRequestForm(string target);
    PresidentialRequestForm(string target, string name);
    PresidentialRequestForm(PresidentialRequestForm &other);
    virtual void executeAction() const ;
    const string& GetTarget() const;
};

PresidentialRequestForm::PresidentialRequestForm(string target) : AForm("Request", 25,5), _target(target){}

PresidentialRequestForm::PresidentialRequestForm(string target) : AForm(name, 25,5), _target(target){}

PresidentialRequestForm::PresidentialRequestForm(PresidentialRequestForm &other): AForm(other.name, other.grade_to_sign, other.grade_to_execute), _target(other.target){}

const string& PresidentialRequestForm::GetTarget() const{return this->_target;}

void  PresidentialRequestForm::executeAction() const
{
  std::cout << this->GetTarget() << "has been pardoned by Zaphod Beeblebox" << std::endl; 
}
