#include "ShrbberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(string target):AForm("Shrubbery", 145, 137), target(target){}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other): AForm(other), target(other.target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::executeAction() const 
{
  string name = this-> target + "_shrubbery";
  char arr[3] = {'0', 'O', 'o'};
  int len;
  std::ofstream File(name.c_str());
  srand(time(NULL));
  if (!File.is_open()){
    std::cerr << "Cannot Open A File" << std::endl;
    return;
  }
  for(int i = 0; i < H; ++i){
    int space = (H - 1) - 1;
    int starts = (2 * i) + 1;
    for(int j = 0; j < space; j++) File<< " ";
    for(int j = 0; j < starts; j++){
      char sh = '*';
      if(j && j != starts -1)
      {
        int r = rand() % 100; 
        if(r < 4){
          int idx = (len++ % 3);
          sh = arr[idx];
        } 
        File << sh;
      }
    }
      File << "\n";
  }
  int treeWith = (2 * H) - 1;
  int leftPad = (treeWith - TRUNKWITH) / 2;
  for(int t = 1 ; t <= TRUNKHEIGHT; ++t){
      for(int i = 0; i < leftPad; ++i) File<< " ";
      for(int i = 0; i < TRUNKWITH; ++i) File << "#";
      File << "\n";
  }
  File.close();
}
