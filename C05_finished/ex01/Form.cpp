#include "Form.hpp"

Form::Form(): name("Form"), sign(false), grade_to_sign(5),  grade_to_execute(10){}; 
Form::Form(const string &name, int grade_to_sign, int grade_to_execute): name(name), sign(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute){}

Form::~Form(){} 


Form::Form(Form& other): name(other.name), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute){
  this->sign = other.sign;
}

Form& Form::operator=(Form& other)
{
  if(this != &other) this->sign = other.sign;
  return *this;
}

int Form::get_sign_grade() const{ return this->grade_to_sign;}

int Form::get_execute_grade() const{return this->grade_to_execute;}

const string& Form::GetName() const{return this->name;}

int Form::get_sign() const{ return this->sign;}

const char * Form::GradeTooHighException::what()const throw(){return RED_GRADE_TOO_HIGH; }

const char * Form::GradeTooLowException::what()const throw(){return RED_GRADE_TOO_HIGH; }

void Form::beSigned(const Bureaucrat &obj){
  int check = this->get_sign_grade();

  if(check < 1 || check > 150 || check >= obj.getGrade()) throw Form::GradeTooLowException();
  this->sign = true;
}
void Bureaucrat::signForm(Form& other) const{
  try{
    other.beSigned(*this);
    std::cout << this->getName() << " singed " << other.GetName() << std::endl;
  }
  catch(std::exception &e){
    std::cout 
      << this->getName() << " couldent sign with " 
      << other.GetName() <<" "
      << e.what() << std::endl;
  }
}
