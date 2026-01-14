#pragma once
#include <iostream>
#include <cstring>

template<typename T>
void element(T c){std::cout << c << std::endl;}

template<typename T, typename U, typename A>
void iter(T arr, U lenght, void (*element)(A))
{
    for(U i = 0; i < lenght; ++i) (*element)(arr[i]);
}
