#pragma once
#include <iostream>
typedef std::string string;
class Bureaucrat;
class Form {
  private:
    const string name;
    bool isSigned;
    const int gradeTosign;
    int gradeToExecute;
  public:
    Form();
    ~Form();
    void besigned(Bureaucrat &obj);
    const string & getName();
    class GradeTooHighException:public std::exception{
      public: virtual const char *what() const throw();
    };
    class GradeTooLowException:public std::exception{
      public: virtual const char *what() const throw();
    };
};
