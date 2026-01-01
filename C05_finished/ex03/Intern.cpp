#include "Intern.hpp"
Intern::UnknownFormExeption::~UnknownFormExeption() throw() {};
Intern::UnknownFormExeption::UnknownFormExeption(string target):msg("Intern cannot create " + target){}
const char *Intern::UnknownFormExeption::what() const throw(){
  return this->msg.c_str();
}
AForm *createRobotomy(string Target){return new RobotomyRequestForm(Target);}

AForm *createShrubbery(string Target){return new ShrubberyCreationForm(Target);}
AForm *createPresidential(string Target){return new PresidentialPardonForm(Target);}

AForm* Intern::makeForm(string Name, string Target){
  string names[] = {"robbotomy request", "shrubbery creation", "presidential pardon"};
  AForm * (*creator[3])(string) = {createRobotomy, createShrubbery, createPresidential};
  for(int i = 0; i < 3; ++i){
    if(names[i] == Name){
      std::cout << "Intern create " << Name << std::endl;
      return creator[i](Target);
    }
  }
  throw Intern::UnknownFormExeption(Name);
}
