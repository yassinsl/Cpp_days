
#include "ScavTrap.hpp"

str ClapTrap::getName(){return this->name;}
int ClapTrap::getattackDamage(){return this->AttackDamage;}

ScavTrap::ScavTrap(str name): ClapTrap(name){
  cout << "ScavTrap constructed!" << endl;
}

void ScavTrap::guardGate()
{
    cout << "ScavTrap is now in Gate keeper mode!" << endl;
}

ScavTrap::~ScavTrap() {
  cout << "ScavTrap destroyed!" << endl;
}
void ScavTrap::attack(const std::string &target) {
    cout << "ScavTrap " << this->getName() << " attacks " << target
              << ", causing " << this->getattackDamage() << " points of damage!" << endl;
}

int main(void)
{
        ScavTrap a("Yassin");
        ScavTrap b("Reda");

        a.attack("Reda");
        b.takeDamage(5);
        b.beRepaired(3);
}
