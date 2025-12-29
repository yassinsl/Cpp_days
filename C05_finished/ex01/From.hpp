#pragma once
#include "Bureaucrat.hpp"

class From {
  private:
    const string name;
    bool sign;
    const int grade_to_sign;
    const int grade_to_execute;
  public:
  From();
  From(const string& name, int sign, int grade_to_sign, int grade_to_execute);
  From(Form& other);
  From& operator=(From& other);
  int get_sign_grade() const;
  int get_execute_grade() const;
  const string& getName() const;
  int get_sign() const;
  void beSigned(Bureaucrat &obj) const;

  class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};
