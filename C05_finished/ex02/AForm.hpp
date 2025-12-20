#pragma once
#include <iostream>

typedef string std::string;

class AForm{
  protected:
      string _name;
      bool _signed_status;
      const int _grade_sign;
      const int _grade_execute;
  public:
      AForm(string name, bool singed_status, int _grade_sign, int _grade_execute): _name(name), 
      void execute(Bureaucrat const &executor);
      virtual void executeAction() const = 0;
};
class ShrubberyCreationForm() : public AForm{
    private:
      const string _target;
    public:
      ShrubberyCreationForm();
      void executeAction() const;
}
ShrubberyCreationForm::ShrubberyCreationForm(string target):AForm("Shrubbry", false,145,137), _target(target){}

void ShrubberyCreationForm::executeAction() const
{
    const int Total_tree_height = 20;
    std::ofstream MyFile(this->_target + "_shrubbery");

    if (!MyFile.is_open())
    {
        std::cerr << "Cannot open file!" << std::endl;
        return;
    }
    char symbols[] = { '*', 'o', 'O' };
    int symbol_index = 0;

    for (int i = 0; i < Total_tree_height; i++)
    {
        int left_space = (Total_tree_height - 1) - i;
        int symbol_count = (2 * i) + 1;
        for (int j = 0; j < left_space; j++)
            MyFile << " ";
        for (int j = 0; j < symbol_count; j++)
        {
            MyFile << symbols[symbol_index];
            symbol_index = (symbol_index + 1) % 3;
        }
        MyFile << "\n";
    }
    int trunk_height = 3;
    int trunk_width = 1;
    int trunk_space = Total_tree_height - 1;

    for (int i = 0; i < trunk_height; i++)
    {
        for (int j = 0; j < trunk_space; j++)
            MyFile << " ";
        for (int j = 0; j < trunk_width; j++)
            MyFile << "|";
        MyFile << "\n";
    }
    MyFile << "\nMerry Christmas!\n";
}
