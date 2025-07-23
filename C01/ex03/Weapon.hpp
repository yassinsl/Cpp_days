
#pragma once
#include <iostream>
#include <string>
typedef std::string str; 

class Weapon{
  private:
      str Weapon_type;
  public:
        Weapon(str string): Weapon_type(string){}
        const str& getType(void);
        void setType(str type);
};
