#include "ScalarConverter.hpp"

void print_convert(double base, int &is_float)
{
  print_char(base);
  print_int(base);
  print_float(base, is_float);
  print_double(base, is_float);
}

void ScalarConverter::convert(const string &literal)
{
  double base = 0.0;
  int is_float = 0;

  if (!Check_validite_argement(literal, &base, is_float))
    throw ExceptionError();
  print_convert(base, is_float);
}
