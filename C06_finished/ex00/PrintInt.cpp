#include "ScalarConverter.hpp"

void print_int(double base)
{
  std::cout << "int: ";
  if (errno == ERANGE || CPseudoLiteral(base))
    printLn("Impossible", FAIL);
  else if (static_cast<long long>(base) > INT_MAX ||
           static_cast<long long>(base) < INT_MIN)
    printLn("Impossible", FAIL);
  else
    std::cout << static_cast<int>(base) << std::endl;
}
