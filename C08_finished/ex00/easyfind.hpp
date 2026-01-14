#pragma once 
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <deque>
#include <sstream>
#include <list>

template<typename T> 
typename T::iterator easyfind(T& args, int value){
  std::stringstream ss;
  typename T::iterator it = std::find(args.begin(), args.end(), value);
   if(it == args.end()){
     ss << value << " Is Not  Found";
     throw std::out_of_range(ss.str());
   }
   return(it); 
}
