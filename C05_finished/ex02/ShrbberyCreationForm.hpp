#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm {
  private:
    const string target;
  public: 
    ShrubberyCreationForm(string target);
    ShrubberyCreationForm(ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    void executeAction() const;
};

