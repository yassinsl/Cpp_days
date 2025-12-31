#pragma once
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

#define H 30
#define TRUNKHEIGHT 60
#define TRUNKWITH 20

class AForm {
  private:
    const string name;
    bool sign;
    const int grade_to_sign;
    const int grade_to_execute;
  public:
    AForm();
    ~AForm();
    AForm(const string& name,  int grade_to_sign, int grade_to_execute);
    AForm(AForm& other);
    AForm& operator=(AForm& other);
    int get_sign_grade() const;
    int get_execute_grade() const;
    const string& GetName() const;
    int get_sign() const;
    void beSigned(const Bureaucrat &obj) ;
    void execute(Bureaucrat const &executor) const;
    virtual void executeAction() const = 0;

      class GradeTooHighException : public std::exception {
        public:
         virtual const char* what() const throw();
      };
      class GradeTooLowException : public std::exception {
        public:
          virtual const char* what() const throw();
      };
};
