#pragma once 

#include "AForm.hpp"

class PresidentialPardonForm: public AForm{
  private:
    const string _target;
  public:
    PresidentialPardonForm(string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &other);
    void executeAction() const ;
    const string& GetTarget() const;
};

