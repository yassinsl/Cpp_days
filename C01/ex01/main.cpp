#include "Zombie.hpp"
void Zombie::SetName(str name)
{
   this->name = name;
}
Zombie* zombieHorde( int N, std::string name )
{
    Zombie *obj = new Zombie[N];
    int i = -1;
    while(++i < N)
          obj[i].SetName(name + std::to_string(i));
    return obj;
}
int main(void)
{
      Zombie *obj = zombieHorde(5, "Yassin");
      int i = 0;
      while(i < 5)
          obj[i++].announce();
      delete[] obj;
}
