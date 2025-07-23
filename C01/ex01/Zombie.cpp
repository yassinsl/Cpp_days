#include "Zombie.hpp"
bool Zombie::isDead = false;
Zombie::~Zombie()
{
    if(!isDead)
        cout << DEAD << endl, isDead = 1;
}
void Zombie::announce()
{
    cout << this->name << BRIN_MSG;
}
