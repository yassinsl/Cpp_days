#pragma once
#include "Weapon.hpp"

class HumanA{
  private:
        Weapon Wp;
        str name;
  public:
        HumanA(str name, Weapon club): name(name), Wp(club){}
        ~HumanA();
        void attack();
};

