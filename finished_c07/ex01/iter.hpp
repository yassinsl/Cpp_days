#pragma once
#include <iostream>
#include <cstring>

template<typename T, typename U>
void element(T c, U i)
{
   std::cout << "element" << "["<<i<<"]: " << c << std::endl;
}

template<typename T, typename U>
void iter(T arr, U lenght, void (*elment)(char, U))
{
  for(int i = 0; arr[i]; ++i) element(arr[i], i);
}
