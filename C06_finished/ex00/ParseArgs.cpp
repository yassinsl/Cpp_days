#include "ScalarConverter.hpp"

const char *ExceptionError::what() const throw()
{
  return VALIDITE_ARGS;
}

int IsPseudoLiteral(const string &s)
{
  return (s == "nan" || s == "nanf" ||
          s == "+inf" || s == "+inff" ||
          s == "-inf" || s == "-inff");
}

double GetPsudoLiteral(const string &s)
{
  double value = 0.0;

  if (s == "nan" || s == "nanf") value = 0.0 / 0.0;
  else if (s == "+inf" || s == "+inff") value = 1.0 / 0.0;
  else if (s == "-inf" || s == "-inff") value = -1.0 / 0.0;
  return value;
}

int Check_validite_argement(const string &literal, double *base, int &is_float)
{
  char *end = NULL;

  if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'')
  {
    *base = static_cast<double>(literal[1]);
    return true;
  }
  errno = 0;
  *base = std::strtod(literal.c_str(), &end);
  if (IsPseudoLiteral(literal))
  {
    *base = GetPsudoLiteral(literal);
    if(literal == "+inff" || literal == "-inff") is_float = 1;
    return true;
  }
  if (end == literal.c_str() || errno == ERANGE)
    return false;
  if (*end == 'f')
  {
    if (std::strlen(end) > 1)
      return false;
    is_float = 1;
  }
  else if (*end != '\0')
    return false;
  return true;
}

int CPseudoLiteral(double &base)
{
  return (base != base || base == HUGE_VAL || base == -HUGE_VAL);
}

int printLn(const std::string &msg, int status)
{
  std::cout << msg << std::endl;
  return status;
}

