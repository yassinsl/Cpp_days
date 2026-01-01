#pragma once

#include "AForm.hpp"
#include "ShrbberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
  public:
      AForm* makeForm(string Name, string Target);
      class UnknownFormExeption  : public std::exception{
        private:
          string msg;
        public:
          UnknownFormExeption(string target);
          virtual ~UnknownFormExeption() throw();
          const char *what() const throw();
      };
};
