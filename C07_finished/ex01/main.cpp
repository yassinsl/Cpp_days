#include "iter.hpp"

int main(){
  char arr[] = {'1', '2', '3', '\0'};
  ::iter(arr, std::strlen(arr), element<char>);
}
