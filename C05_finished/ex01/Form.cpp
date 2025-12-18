#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():name("Form"),isSigned(false), gradeTosign(10), gradeToExecute(4){};

Form::~Form(){}
const string & Form::getName(){return this->name;};
void Form::besigned(Bureaucrat &obj)
{
  if(obj.GetGrade() <= this->gradeTosign)
      this->isSigned = true;
  else throw Form::GradeTooLowException();
}
char const *Form::GradeTooLowException::what() const throw() {return "Grade to lower";}
char const *Form::GradeTooHighException::what() const throw() {return "Grade to Higher";}
void Bureaucrat::signForm(Form &other)
{
try
  {
    other.besigned(*this);
    std::cout  << this->name << "signed" << other.getName() << std::endl;
  }
catch(std::exception &e)
  {
      std::cout << this->name << "couldn't sign " << other.getName() << "because "<< e.what() << std::endl;        
  }
  //throw other.GradeTooLowerException();
}
