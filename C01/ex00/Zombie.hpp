#pragma once
#include <iostream>
#include <string>
typedef std::string str;
using namespace std;
#define BRIN_MSG ": BraiiiiiiinnnzzzZ...\n"
#define ZOMBIE_HERE "🧟 \033[0;31mBe careful! The zombie is in your house.\033[0m\n"
#define DEAD "💀 \033[0;32mthe zombie is dead bro\033[0m"
class Zombie{
  private: 
      str name;
      void announce(void);
  public :
      Zombie(str name);
      Zombie* newZombie(std::string name);
      void randomChump( std::string name );
      ~Zombie();
};
