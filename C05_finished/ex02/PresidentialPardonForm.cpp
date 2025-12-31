#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("Request", 25,5), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other): AForm(other), _target(other._target){}

const string& PresidentialPardonForm::GetTarget() const{return this->_target;}

void  PresidentialPardonForm::executeAction() const
{
  std::cout << this->GetTarget() << " has been pardoned by Zaphod Beeblebox" << std::endl; 
}
