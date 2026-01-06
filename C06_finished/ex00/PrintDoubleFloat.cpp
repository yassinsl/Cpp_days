#include "ScalarConverter.hpp"

void PrintPseudoLiteral(double num, int is_float)
{
  if(num != num) std::cout << "nan";
  else if(num == HUGE_VAL) std::cout << "+inf"; 
  else if(num == -HUGE_VAL)  std::cout << "inf";
  if(is_float) std::cout << "f";
}
void print_number(double num, int is_float){
  if(CPseudoLiteral(num)) PrintPseudoLiteral(num, is_float);
  else if((long long) num == num)
        std::cout << num << ".00";
  else std::cout << static_cast<double>(num);
}
void print_float(double base, int is_float)
{
  std::cout << "float : ";
  print_number(base, is_float);
  if(is_float) std::cout << "f";
  std::cout << "\n";
}

void print_double(double base, int is_float)
{
  std::cout << "double : ";
  print_number(base, is_float);
  std::cout << "\n";
}
