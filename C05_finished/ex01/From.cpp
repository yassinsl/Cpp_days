#include "Form.hpp"

Form::Form(): name("Form"), sign(false), grade_to_sign(5),  grade_to_execute(10){}; 
Form::From(const string &name, int grade_to_sign, int grade_to_execute): name(name), sign(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute){}

Form::Form(From &other){
  this->sign = other.sign;
}

Form::Form(Form& other){
  this->sign = other.sign;
}

From& From::operator=(From& other)
{
  if(this != &other) this->sign = other.sign;
  return *this;
}

int From::get_sign_grade() const{ return this->grade_to_sign;}

int From::get_execute_grade() const{return this->get_execute_grade;}

const string& Form::GetName() const{return this->name;}

int Form::get_sign() const{ return this->sign;}

const char * Form::GradeTooHighException::what()const throw{return RED_GRADE_TOO_HIGH; }

const char * Form::GradeTooLowException::what()const throw{return RED_GRADE_TOO_HIGH; }

void Form::beSigned(Bureaucrat &obj) const{
  int check = this->get_sign_grade();

  if(check < 1 || check > 150 || check >= obj.getGrade()) throw Form::GradeTooLowException();
  this->sign = true;
}
void Bureaucrat::signForm(const  Form& other) const{
  try{
    Form::beSigned();
    std::cout << this->GetName() << "singed" << other.getName() << std::endl;
  }
  catch(std::exception &e){
    std::cout 
      << this->getName() << "couldent sign " 
      << other.getName() <<" "
      << e.what() << std::endl;
  }
}
