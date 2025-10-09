#include "ClapTrap.hpp"

class FragTrap::public ClapTrap
{
    public:
        FragTrap(str name);
        ~FragTrap();
        void highFivesGuys(void);
};

FragTrap::FragTrap(str name): ClapTrap(name){
    cout << "ScavTrap Constructed" << endl;
     this->setHitPoints(100);
     this->setEnergyPoints(100);
     this->setAttackDamage(30);
}

FragTrap::~FragTrap(){cout << "FragTrap destroyed" << endl;}

void FragTrap::highFivesGuys(void)
{
  cout << this->getName() << "FragTrap requests a high five! 🙌" << endl;
}
