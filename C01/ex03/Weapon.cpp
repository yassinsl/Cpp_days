#include "Weapon.hpp"

const str& Weapon::getType()
{
    return this->Weapon_type;
}

void Weapon::setType(str type)
{
  this->Weapon_type = type;
}
