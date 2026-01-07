#include <iostream>
int max(int b, int n){
  return (b > n) ? b : n;
}
template <typename A>
A main(void)
{
  A c = 10;
  std::cout << c << std::endl;
}
