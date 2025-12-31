#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
  private:
    const string target;
  public 
    ShrubberyCreationForm();
    ShrubberyCreationForm(string target);
    ShrubberyCreationForm(ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    virtual void executeAction() const;
    void CreateAsciiTree() const;
};

ShrubberyCreationForm::ShrubberyCreationForm(): target("_target"), AForm("Shrubbery", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(string target, const string name): target(target), AForm(name, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other): target(other.target), AForm(other.GetName(), 145, 137){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::CreateAsciiTree() const {
  string name = "_shrubbery";
  char arr[3] = {'0', 'O', 'o'};
  static int ran;
  std::ofstream File(this->target + name);
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
      char sh = "*";
      if(j && j != starts -1)
      {
        int r = rand() % 100; 
        if(r < 4){
          int idx = (len++ % 3);
          sh = arr[idx];
        } 
        File << sh;
      }
      File << "\n";
    }
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
