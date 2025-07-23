#pragma once
#include <iostream>
#include <string>
typedef std::string str;
using namespace std;
#define BRIN_MSG ": BraiiiiiiinnnzzzZ...\n"
#define DEAD "💀 \033[0;32mall zombies are dead bro\033[0m"

class Zombie{
  private: 
      str name;
  public :
      static bool isDead;
      ~Zombie();
      void announce(void);
      void SetName(str name);
};
Zombie* zombieHorde( int N, std::string name);
