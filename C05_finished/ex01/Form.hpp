#pragma once
#include "Bureaucrat.hpp"

class Form {
  private:
    const string name;
    bool sign;
    const int grade_to_sign;
    const int grade_to_execute;
  public:
  Form();
  ~Form();
  Form(const string& name, int grade_to_sign, int grade_to_execute);
  Form(Form& other);
  Form& operator=(Form& other);
  int get_sign_grade() const;
  int get_execute_grade() const;
  const string& GetName() const;
  int get_sign() const;
  void beSigned(const Bureaucrat &obj);

  class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};
