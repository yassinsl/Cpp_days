#include "Identify.hpp"
#include <typeinfo>

Base::~Base(){}
Base *generate(void){
  A *base  = new A();
  return dynamic_cast<Base *>(base);
}

void identify(Base *p)
{
  if(dynamic_cast<A*>(p)) std::cout << "A";
  else if(dynamic_cast<B*>(p)) std::cout << "B";
  else if(dynamic_cast<C*>(p)) std::cout << "C";
  std::cout <<"\n";
}

static void checkA(Base &p)
{
  try{
    dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
  }
  catch (std::exception &e){}
}

static void checkB(Base &p)
{
  try{
    dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
  }
  catch (std::bad_cast &e){std::cout << e.what();}
}

static void checkC(Base &p)
{
  try{
    dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
  }
  catch (std::exception &e){}
}

void identify(Base &p)
{
  checkA(p);
  checkB(p);
  checkC(p);
}
