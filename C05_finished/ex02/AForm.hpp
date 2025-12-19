#pragma once
#include <iostream>

typedef string std::string;

class AForm{
  protected:
      string _name;
      string _target;
      bool _signed_status;
      const int grade_sign;
      const int grade_execute;
  public:
      void execute(Bureaucrat const &executor);
      virtual void executeAction() const = 0;
};
class ShrubberyCreationForm() : public AForm{
    public:
      ShrubberyCreationForm();
}
