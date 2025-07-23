#pragma once
#include "Weapon.hpp"

class HumanB{
  private:
        Weapon *Wp;
        str name;
  public:
        HumanB(str name_pr): Wp(0),name(name_pr){}
        void	setWeapon(Weapon &weapon);
        ~HumanB();
        void attack();
};
