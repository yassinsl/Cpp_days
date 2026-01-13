#pragma once
#include <iostream>
#include <cstring>

template<typename T, typename U>
void element(T c, U i)
{
   std::cout << "element" << "["<<i<<"]: " << c << std::endl;
}

template<typename T, typename U>
void iter(T arr, U lenght, void (*element)(char, U))
{
  for(unsigned int i = 0; i < lenght; ++i) (*element)(arr[i], i);
}
