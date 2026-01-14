#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): grade(1), name("Bureaucrat"){
  std::cout << GREEN_DEFAULT_CTOR <<  std::endl;
}

Bureaucrat::~Bureaucrat(){std::cout << "zbi la" << std::endl;}

Bureaucrat::Bureaucrat(const string &name, int grade): grade(grade), name(name){
  std::cout << GREEN_CTOR <<  std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
  std::cout << GREEN_CPY_CTOR << std::endl;
  this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
  std::cout << GREEN_CPY_ASI << std::endl;
  if(this != &other) this->grade = other.grade;
  return *this;
}

const string& Bureaucrat::getName() const{return this->name;}

int Bureaucrat::getGrade() const {return this->grade;}

void Bureaucrat::incrementGrade(){
  int check = this->getGrade() - 1;
  std::cout << check << std::endl;
  if(check < 1 || check > 150) throw Bureaucrat::GradeTooHighException();
  --this->grade;
}

void Bureaucrat::decrementGrade(){
  int check = this->getGrade() + 1;
  if( check > 150) throw Bureaucrat::GradeTooLowException();
  ++this->grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){ 
  return(RED_GRADE_TOO_HIGH);
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){ 
  return(BLUE_GRADE_TOO_LOW);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b)
{
  os << b.getName() << ", bureaucrat grade" << b.getGrade() << ".";
  return os;
}

