#include "HumanA.hpp"
void HumanA::attack(void)
{
    std::cout << "\033[32m" << this->name 
      << " attacks with their " << this->Wp.getType() 
      << "\033[0m" << std::endl;
}
HumanA::~HumanA()
{
  std::cout << "\033[31m" << this->name << " is dead" << "\033[0m" << std::endl;
}


