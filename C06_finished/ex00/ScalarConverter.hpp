#pragma once
#include <iostream>
#include <cstdlib>
#include <cerrno> 
//std::strtod : convet string to double or flaoting 
//std::strtof : convet to flaoting 

#define ERORR_ARC "Usage: ./convert <literal>"
#define SUCCESS 0
#define FAIL 1 
typedef std::string string; 


class ScalarConverter
{
  public:
    static void convert(const string &literal);
};
class ExceptionError:: public exception{
  public:
    virtual const char * what() const throw();
};
int Check_validite_argement(const string &literal, double *base)
{
  char *end;
  if(literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'')
    *base =  static_cast<double>(literal[1]); 
  else {
     errno = 0;
    *base = std::strtod(literal.c_str(), &end);
    if(*end == literal.c_str() || **end == '\0' || errno == ERANGE)
      return false;
  }
  return true;
}
void print_char(double base)
{
  if(errno ==  ERANGE)
    printLn("char :: Emposible");
  else if(!std::isprint(static_cast<unsigned char> base)
      printLn("char:: ");
}
void print_convert(double base){
  print_char(base);
}
static void ScalarConverter::convert(const string &literal)
{
  double base;
  if(!Check_validite_argement(literal, base))
      throw ExceptionError(VALIDITE_ARGS);
  print_convert(base);
}
int printLn(std::string &msg, int status)
{
  std::cout << msg << std::endl; 
  return status;
}
int main(int argc, int *av[])
{
  if(agrc != 2)
    return(printLn(ERORR_ARC, FAIL));
  try{
    ScalarConverter::convert(av[1]);
    return(printLn("Seccuss convert", SUCCESS));
  }
  catch(exception &e){
    return(printLn(e.what(),  Fail));
  }
}
