#include "iter.hpp"

void element(char c , int i){
  std::cout << "element" << "["<<i<<"]: " << c << std::endl;
}


int main(){
  char arr[] = {'1', '2', '3', '\0'};
  ::iter(arr, std::strlen(arr), element);
}
