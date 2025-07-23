#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *z;
    z = new Zombie(name);
    z->announce();
    return(z);
}
