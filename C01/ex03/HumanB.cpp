#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
  this->Wp = &weapon;
}

void HumanB::attack(void)
{
  if(Wp)
    std::cout << "\033[32m" << this->name 
      << " attacks with their " << this->Wp->getType()
      << "\033[0m" << std::endl;
  else 
    std::cout << "\033[32m" << name 
      << " has no weapon to attack with" 
      << "\033[0m" << std::endl;
}
HumanB::~HumanB()
{
  std::cout << "\033[31m" << this->name << " is dead" << "\033[0m" << std::endl;
}

