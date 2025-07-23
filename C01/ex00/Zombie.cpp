#include "Zombie.hpp"

Zombie::Zombie(str name)
{
    this->name = name;
    cout << ZOMBIE_HERE;
}
Zombie::~Zombie()
{
    cout << DEAD << endl;
}
void Zombie::announce()
{
    cout << this->name << BRIN_MSG;
}
