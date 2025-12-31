#include "AForm.hpp"


AForm::AForm(): name("AForm"), sign(false), grade_to_sign(5),  grade_to_execute(10){}  
AForm::~AForm(){}
AForm::AForm(const string &name, int grade_to_sign, int grade_to_execute): name(name), sign(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute){}

AForm::AForm(AForm& other): name(other.name), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute){
  this->sign = other.sign;
}

AForm& AForm::operator=(AForm& other)
{
  if(this != &other) this->sign = other.sign;
  return *this;
}

int AForm::get_sign_grade() const{ return this->grade_to_sign;}

int AForm::get_execute_grade() const{return this->grade_to_execute;}

const string& AForm::GetName() const{return this->name;}

int AForm::get_sign() const{ return this->sign;}

const char * AForm::GradeTooHighException::what()const throw(){return RED_GRADE_TOO_HIGH;}
const char * AForm::FromNotSignedExecption::what()const throw(){return EXCEPTION_SIGNED;}

const char * AForm::GradeTooLowException::what()const throw(){return BLUE_GRADE_TOO_LOW;}

void AForm::beSigned(const Bureaucrat &obj) {
  int check = this->get_sign_grade();

  if(check < 1 || check > 150 || check >= obj.getGrade()) throw AForm::GradeTooLowException();
  this->sign = true;
}
void Bureaucrat::signForm(AForm& other) {
  try{
    other.beSigned(*this);
    std::cout << this->getName() << "singed" << other.GetName() << std::endl;
  }
  catch(std::exception &e){
    std::cout 
      << this->getName() << "couldent sign " 
      << other.GetName() <<" "
      << e.what() << std::endl;
  }
}

void AForm::execute(Bureaucrat const& executor) const{
  if(!this->get_sign()) throw AForm::FromNotSignedExecption();
  else if(this->get_execute_grade() > executor.getGrade()) throw AForm::GradeTooLowException();
  else this->executeAction();
  std::cout << executor.getName() << " executed " << this->GetName() << std::endl;
}

void Bureaucrat::executeForm(AForm &form){form.execute(*this);}
