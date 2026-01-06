#include "ScalarConverter.hpp"

void print_char(double base)
{
  std::cout << "char: ";
  if (errno == ERANGE || CPseudoLiteral(base))
    printLn("Impossible", FAIL);
  else if (!std::isprint(static_cast<unsigned char>(static_cast<int>(base))))
    printLn("Non displayable", FAIL);
  else
    std::cout << "'" << static_cast<char>(base) << "'" << std::endl;
}
