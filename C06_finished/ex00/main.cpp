#include "ScalarConverter.hpp"

int main(int argc, char **av)
{
  if (argc != 2)
    return printLn(ERORR_ARC, FAIL);
  try
  {
    ScalarConverter::convert(av[1]);
    return printLn("Success convert", SUCCESS);
  }
  catch (std::exception &e)
  {
    std::cout << "Error: ";
    return printLn(e.what(), FAIL);
  }
}
